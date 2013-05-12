#ifndef LINKMODE_H
#define LINKMODE_H

#include <QDebug>
#include <QGraphicsItem>
#include "diagram/diagramview.h"
#include "diagrammode.h"
#include "diagram/items/linkitem.h"

class LinkMode : public DiagramMode
{
public:
    LinkMode(DiagramView* diagramView);
    ~LinkMode();

    bool mousePressEvent(QMouseEvent* e);
    bool mouseMoveEvent(QMouseEvent* e);
    bool enterEvent(QEvent* e);
    bool leaveEvent(QEvent* e);

protected:
    void addLink();

private:
    QGraphicsItem* startItem;
    QGraphicsItem* endItem;
    LinkAnchor* _highlitedAnchor;
};

#endif // LINKMODE_H
