#ifndef LINKITEM_H
#define LINKITEM_H

#include <QGraphicsPathItem>
#include <QGraphicsItem>
#include <QPainter>
#include <QStyleOptionGraphicsItem>
#include <QWidget>
#include "diagram/diagramview.h"

class LinkItem : public QGraphicsPathItem
{
public:
    LinkItem(DiagramView* diagramView,
             QGraphicsItem* startItem,
             QGraphicsItem* endItem);
    ~LinkItem();

protected:
    void doPath();
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
               QWidget *widget = 0);

private:
    DiagramView* diagramView;
    QGraphicsItem* startItem;
    QGraphicsItem* endItem;
};

#endif // LINKITEM_H
