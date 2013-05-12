#include "linkmode.h"

LinkMode::LinkMode(DiagramView* diagramView) :
    DiagramMode(diagramView)
{
    startItem = (QGraphicsItem*) 0;
    endItem = (QGraphicsItem*) 0;
    _diagramView->diagramScene()->setShowAnchors(true);
    _highlitedAnchor = NULL;
}

LinkMode::~LinkMode()
{
    _diagramView->diagramScene()->setShowAnchors(false);
}

bool LinkMode::mousePressEvent(QMouseEvent *e)
{
    if(e->button() == Qt::LeftButton)
    {
        QGraphicsItem* item = _diagramView->itemAt(_diagramView->mapToScene(e->pos()));
        if (item != (QGraphicsItem*) 0)
        {
            if (startItem == (QGraphicsItem*) 0)
            {
                startItem = item;
            }
            else
            {
                endItem = item;
                addLink();
            }
        }
    }

    return true;
}

bool LinkMode::mouseMoveEvent(QMouseEvent *e)
{
    const QRect rect = QRect(e->pos().x() - 20, e->pos().y() - 20, 40, 40);
    QRectF sceneRect = QRectF(_diagramView->mapToScene(rect.topLeft()), _diagramView->mapToScene(rect.bottomRight()));
    if (_highlitedAnchor)
    {
        if (!sceneRect.contains(_highlitedAnchor->scenePos()))
        {
            _highlitedAnchor->setHighlighted(false);
            _highlitedAnchor = NULL;
        }
    }

    QList<QGraphicsItem*> items = _diagramView->items(rect);
    if (!items.isEmpty())
    {
        qreal d = 0.;
        QGraphicsItem* nearestItem = NULL;
        for (QGraphicsItem* item : items)
        {
            if (item->data(ItemData::TYPE).toInt() == ItemType::ANCHOR)
                {
                qreal dt = (sceneRect.center() - item->sceneBoundingRect().center()).manhattanLength();
                if (!nearestItem || dt < d)
                {
                    d = dt;
                    nearestItem = item;
                }
            }
        }
        if (nearestItem && (!_highlitedAnchor || _highlitedAnchor != nearestItem))
        {
            if (_highlitedAnchor)
            {
                _highlitedAnchor->setHighlighted(false);
            }
            _highlitedAnchor = static_cast<LinkAnchor*>(nearestItem);
            _highlitedAnchor->setHighlighted(true);
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

void LinkMode::addLink()
{
//    diagramView->addItem(
//                new LinkItem(diagramView ,startItem, endItem));
}
