#ifndef LINKPATHITEM_H
#define LINKPATHITEM_H

#include <QGraphicsPathItem>
#include <QStyleOptionGraphicsItem>
#include <QPainter>
#include <QWidget>
#include "linkanchor.h"
#include "linkitem.h"

class LinkPathItem : public QGraphicsPathItem, public LinkItem
{
public:
    LinkPathItem(LinkAnchor *startAnchor,
                 QPointF point);
    ~LinkPathItem();

protected:
    void doPath();
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
               QWidget *widget = 0);
};

#endif // LINKPATHITEM_H
