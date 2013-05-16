#include "linkpathitem.h"

LinkPathItem::LinkPathItem(LinkAnchor *startAnchor,
                           QPointF point) :
    QGraphicsPathItem(),
    LinkItem(startAnchor, point, this)
{
    setZValue(-1000);
}

LinkPathItem::~LinkPathItem()
{
}

void LinkPathItem::doPath()
{
    QPainterPath path = QPainterPath(startPoint());
    path.lineTo(endPoint());
    setPath(path);
}

void LinkPathItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
                         QWidget *widget)
{
    doPath();
    QGraphicsPathItem::paint(painter, option, widget);
}
