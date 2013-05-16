#ifndef LINKMODE_H
#define LINKMODE_H

#include <QDebug>
#include <QGraphicsItem>
#include "diagram/diagramview.h"
#include "diagram/diagramcontroller.h"
#include "diagrammode.h"
#include "diagram/items/linkpathitem.h"

class LinkMode : public DiagramMode, protected DiagramController
{
public:
    LinkMode(DiagramView* diagramView);
    ~LinkMode();

    bool mousePressEvent(QMouseEvent* e);
    bool mouseMoveEvent(QMouseEvent* e);
    bool enterEvent(QEvent* e);
    bool leaveEvent(QEvent* e);

protected:
    LinkAnchor* highlightedAnchor();
    void setHighlightedAnchor(LinkAnchor* highlightedAnchor);

    LinkItem* linkItem();
    void setLinkItem(LinkItem* linkItem);

private:
    LinkAnchor* _highlightedAnchor;
    LinkItem* _linkItem;
};

#endif // LINKMODE_H
