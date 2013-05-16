#include "linkmode.h"

LinkMode::LinkMode(DiagramView* diagramView) :
    DiagramMode(),
    DiagramController(diagramView)
{
    diagramView->diagramScene()->setShowAnchors(true);
    setHighlightedAnchor(NULL);
    _linkItem = NULL;
}

LinkMode::~LinkMode()
{
    diagramView()->diagramScene()->setShowAnchors(false);
}

bool LinkMode::mousePressEvent(QMouseEvent *e)
{
    if(e->button() == Qt::LeftButton && highlightedAnchor())
    {
        if (linkItem())
        {
            linkItem()->setEndAnchor(highlightedAnchor());
            setLinkItem(NULL);
        }
        else
        {
            setLinkItem(new LinkPathItem(highlightedAnchor(), diagramView()->mapToScene(e->pos())));
            diagramView()->addItem(linkItem());
        }
    }

    return true;
}

bool LinkMode::mouseMoveEvent(QMouseEvent *e)
{
    if (linkItem())
    {
        linkItem()->setEndPoint(diagramView()->mapToScene(e->pos()));
    }

    const QRect rect = QRect(e->pos().x() - 20, e->pos().y() - 20, 40, 40);
    QRectF sceneRect = QRectF(diagramView()->mapToScene(rect.topLeft()), diagramView()->mapToScene(rect.bottomRight()));
    if (highlightedAnchor())
    {
        if (!sceneRect.contains(highlightedAnchor()->scenePos()))
        {
            highlightedAnchor()->setHighlighted(false);
            setHighlightedAnchor(NULL);
        }
    }

    QList<QGraphicsItem*> items = diagramView()->items(rect);
    if (!items.isEmpty())
    {
        qreal d = 0.;
        QGraphicsItem* nearestItem = NULL;
        for (QGraphicsItem* item : items)
        {
            if (item->data(ItemData::TYPE).toInt() == ItemType::ANCHOR &&
                    (!linkItem() || linkItem()->startAnchor()->parentItem() != item->parentItem()))
                {
                qreal dt = (sceneRect.center() - item->sceneBoundingRect().center()).manhattanLength();
                if (!nearestItem || dt < d)
                {
                    d = dt;
                    nearestItem = item;
                }
            }
        }
        if (nearestItem && (!highlightedAnchor() || highlightedAnchor() != nearestItem))
        {
            if (highlightedAnchor())
            {
                highlightedAnchor()->setHighlighted(false);
            }
            setHighlightedAnchor(static_cast<LinkAnchor*>(nearestItem));
            highlightedAnchor()->setHighlighted(true);
        }
    }
    return true;
}

bool LinkMode::enterEvent(QEvent *e)
{
    return true;
}

bool LinkMode::leaveEvent(QEvent *e)
{
    return true;
}

LinkAnchor *LinkMode::highlightedAnchor()
{
    return _highlightedAnchor;
}

void LinkMode::setHighlightedAnchor(LinkAnchor *highlightedAnchor)
{
    _highlightedAnchor = highlightedAnchor;
}

LinkItem *LinkMode::linkItem()
{
    return _linkItem;
}

void LinkMode::setLinkItem(LinkItem *linkItem)
{
    _linkItem = linkItem;
}

