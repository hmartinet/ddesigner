#include "linkitem.h"

LinkItem::LinkItem(LinkAnchor *startAnchor,
                   QPointF endPoint,
                   QGraphicsItem* graphicsItem) :
    _graphicsItem(graphicsItem),
    _startAnchor(startAnchor),
    _endAnchor(NULL),
    _endPoint(endPoint)
{
}

LinkItem::~LinkItem()
{
}

LinkAnchor *LinkItem::startAnchor()
{
    return _startAnchor;
}

void LinkItem::setStartAnchor(LinkAnchor *startAnchor)
{
    _startAnchor = startAnchor;
    graphicsItem()->update();
}

LinkAnchor *LinkItem::endAnchor()
{
    return _endAnchor;
}

void LinkItem::setEndAnchor(LinkAnchor *endAnchor)
{
    _endAnchor = endAnchor;
    graphicsItem()->update();
}

QPointF LinkItem::startPoint()
{
    return startAnchor()->sceneCenter();
}

QPointF LinkItem::endPoint()
{
    if (endAnchor())
    {
        return endAnchor()->sceneCenter();
    }
    return _endPoint;
}

void LinkItem::setEndPoint(QPointF endPoint)
{
    _endPoint = endPoint;
    graphicsItem()->update();
}

QGraphicsItem *LinkItem::graphicsItem()
{
    return _graphicsItem;
}


