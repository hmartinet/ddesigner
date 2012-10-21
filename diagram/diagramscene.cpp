#include "diagramscene.h"

#include <QDebug>
#include <QPainter>
#include <QRectF>

static const int GRID_STEP = 30;

inline int sign(const qreal x)
{
    return (x < 0.) ? -1 : 1;
}

inline qreal round(qreal val, int step)
{
    int tmp = int(val) + sign(val) * step /2;
    tmp -= tmp % step;
    return qreal(tmp);
}

DiagramScene::DiagramScene(QObject* parent) :
    QGraphicsScene(parent)
{
}

void DiagramScene::setDisplayGrid(bool displayGrid)
{
    this->displayGrid = displayGrid;
    update();
}

QPointF DiagramScene::nearestValid(QPointF point)
{
    if (!displayGrid)
    {
        return point;
    }
    return QPointF(round(point.x(), GRID_STEP), round(point.y(), GRID_STEP));
}

void DiagramScene::drawBackground(QPainter* painter, const QRectF& rect)
{
    if (displayGrid)
    {
        int step = GRID_STEP;
        painter->setPen(QPen(QColor(200, 200, 255, 125)));
        // draw horizontal grid
        qreal start = round(rect.top(), step);
        if (start > rect.top()) {
            start -= step;
        }
        for (qreal y = start - step; y < rect.bottom(); ) {
            y += step;
            painter->drawLine(rect.left(), y, rect.right(), y);
        }
        // now draw vertical grid
        start = round(rect.left(), step);
        if (start > rect.left()) {
            start -= step;
        }
        for (qreal x = start - step; x < rect.right(); ) {
            x += step;
            painter->drawLine(x, rect.top(), x, rect.bottom());
        }
    }
}
