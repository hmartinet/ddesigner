#include "linkitem.h"

LinkItem::LinkItem(DiagramView *diagramView,
                   QGraphicsItem *startItem,
                   QGraphicsItem *endItem) :
    QGraphicsPathItem(),
    diagramView(diagramView),
    startItem(startItem),
    endItem(endItem)
{
    setZValue(-1000);
}

LinkItem::~LinkItem()
{
}

void LinkItem::doPath()
{
    QPointF startItemPos = startItem->pos() - QPointF(5, 5);
    QPointF endItemPos = endItem->pos() - QPointF(5, 5);
    QPoint direction = QPoint(1, 1);

    QPointF startPoint;
    if (startItemPos.y() < endItemPos.y()) {
        direction.setY(-1);
        startPoint = QPointF(startItemPos.x() + startItem->boundingRect().width() / 2,
                             startItemPos.y() + startItem->boundingRect().height());
    } else {
        startPoint = QPointF(startItemPos.x() + startItem->boundingRect().width() / 2,
                             startItemPos.y());
    }

    QPointF endPoint;
    if (startItemPos.x() < endItemPos.x()) {
        endPoint = QPointF(endItemPos.x(),
                           endItemPos.y() + endItem->boundingRect().height() / 2);
    } else {
        direction.setX(-1);
        endPoint = QPointF(endItemPos.x() + endItem->boundingRect().width(),
                           endItemPos.y() + endItem->boundingRect().height() / 2);
    }

    QPainterPath path = QPainterPath(startPoint);
    path.lineTo(startPoint.x(), endPoint.y() + direction.y() * 40);
    path.cubicTo(startPoint.x(), endPoint.y() + direction.y() * 20,
                 startPoint.x() + direction.x() * 20, endPoint.y(),
                 startPoint.x() + direction.x() * 40, endPoint.y());
    path.lineTo(endPoint.x(), endPoint.y());
    setPath(path);
}

void LinkItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
                     QWidget *widget)
{
    doPath();
    QGraphicsPathItem::paint(painter, option, widget);
}

