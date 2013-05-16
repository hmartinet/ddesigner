#ifndef LINKITEM_H
#define LINKITEM_H

#include <QGraphicsItem>
#include "linkanchor.h"

class LinkItem
{
public:
    LinkItem(LinkAnchor *startAnchor,
             QPointF endPoint,
             QGraphicsItem* graphicsItem);
    ~LinkItem();

    LinkAnchor* startAnchor();
    void setStartAnchor(LinkAnchor* startAnchor);
    LinkAnchor* endAnchor();
    void setEndAnchor(LinkAnchor* endAnchor);

    QPointF startPoint();

    QPointF endPoint();
    void setEndPoint(QPointF endPoint);

    QGraphicsItem* graphicsItem();

private:
    QGraphicsItem* _graphicsItem;
    LinkAnchor* _startAnchor;
    LinkAnchor* _endAnchor;
    QPointF _endPoint;
};

#endif // LINKITEM_H
