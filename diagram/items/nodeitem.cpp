#include "nodeitem.h"

const float NodeItem::OFFSET = 5;

NodeItem::NodeItem(bool placement, QGraphicsItem* graphicsItem) :
    _placement(placement),
    _graphicsItem(graphicsItem),
    _anchorList(QList<LinkAnchor*>())
{
}

NodeItem::~NodeItem()
{
}

bool NodeItem::showAnchors()
{
    return _showAnchors;
}

void NodeItem::setShowAnchors(bool showAnchors)
{
    _showAnchors = showAnchors;
    for (LinkAnchor* anchor : _anchorList)
    {
        anchor->setVisible(showAnchors);
    }
}

QGraphicsItem* NodeItem::graphicsItem()
{
    return _graphicsItem;
}

NodeLabelItem *NodeItem::labelItem() const
{
    return _labelItem;
}

FourDirection NodeItem::labelDirection()
{
    return _labelDirection;
}

void NodeItem::setLabel(QString label, FourDirection labelDirection)
{
    _labelDirection = labelDirection;
    _labelItem = new NodeLabelItem(graphicsItem(), label);
    _labelItem->setPosition(labelAlignment(), labelPosition());
    _anchorList.append(new LinkAnchor(graphicsItem()));
    _anchorList.last()->setCenter(anchorPosition(TOP));
    _anchorList.append(new LinkAnchor(graphicsItem()));
    _anchorList.last()->setCenter(anchorPosition(LEFT));
    _anchorList.append(new LinkAnchor(graphicsItem()));
    _anchorList.last()->setCenter(anchorPosition(RIGHT));
    _anchorList.append(new LinkAnchor(graphicsItem()));
    _anchorList.last()->setCenter(anchorPosition(BOTTOM));
    setShowAnchors(false);
}

QPointF NodeItem::labelPosition()
{
    switch (labelDirection()) {
    case TOP:
        return QPointF(itemSize().center().x() -
                       labelItem()->boundingRect().width() / 2,
                       itemSize().top() -
                       labelItem()->boundingRect().height() + OFFSET);
    case LEFT:
        return QPointF(itemSize().left() -
                       labelItem()->boundingRect().width() + OFFSET,
                       itemSize().center().y() -
                       labelItem()->boundingRect().height() / 2);
    case RIGHT:
        return QPointF(itemSize().right() - OFFSET,
                       itemSize().center().y() -
                       labelItem()->boundingRect().height() / 2);
    default:
        return QPointF(itemSize().center().x() -
                       labelItem()->boundingRect().width() / 2,
                       itemSize().bottom() - OFFSET);
    }
}

Qt::Alignment NodeItem::labelAlignment()
{
    switch (labelDirection()) {
    case LEFT:
        return Qt::AlignRight;
    case RIGHT:
        return Qt::AlignLeft;
    default:
        return Qt::AlignCenter;
    }
}

QPointF NodeItem::anchorPosition(FourDirection direction)
{
    switch (direction) {
    case TOP:
        return QPointF(itemSize().center().x(),
                       itemSize().top() - OFFSET/2);
    case LEFT:
        return QPointF(itemSize().left() - OFFSET/2,
                       itemSize().center().y());
    case RIGHT:
        return QPointF(itemSize().right() + OFFSET/2,
                       itemSize().center().y());
    default:
        return QPointF(itemSize().center().x(),
                       (labelDirection() == BOTTOM ?
                            size().bottom() : itemSize().bottom()) + OFFSET/2);
    }
}




