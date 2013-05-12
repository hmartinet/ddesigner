#include "nodesvgitem.h"

NodeSvgItem::NodeSvgItem(
        QPointF position, const QString &label,
        FourDirection labelDirection, bool placement, QSvgRenderer *renderer) :
    QGraphicsSvgItem(),
    NodeItem(placement, this)
{
    setSharedRenderer(renderer);
    setOpacity(placement ? .5 : 1.);
    setCenter(position);
    setLabel(label, labelDirection);

    if (!placement)
    {
        setFlag(QGraphicsItem::ItemIsSelectable);
        setFlag(QGraphicsItem::ItemIsMovable);
        setFlag(QGraphicsItem::ItemSendsGeometryChanges);
    }
}


NodeSvgItem::~NodeSvgItem()
{
}

QRectF NodeSvgItem::itemSize() const
{
    return QGraphicsSvgItem::boundingRect();
}

QRectF NodeSvgItem::size() const
{
    return itemSize().united(labelItem()->idealBoundingRect());
}

QRectF NodeSvgItem::boundingRect() const
{
    return size();
}

QPointF NodeSvgItem::relativeCenter()
{
    return QPointF(itemSize().width() / 2,
                   itemSize().height() / 2);
}


QPointF NodeSvgItem::center()
{
    return pos() + relativeCenter();
}

void NodeSvgItem::setCenter(QPointF center)
{
    setPos(center - relativeCenter());
}

QVariant NodeSvgItem::itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant &value)
{
    if (change == QGraphicsSvgItem::ItemPositionChange && QGraphicsSvgItem::scene())
    {
        //return diagramView->snapToGrid(value.toPointF() + relativeCenter()) - relativeCenter();
    }
    return QGraphicsSvgItem::itemChange(change, value);
}

