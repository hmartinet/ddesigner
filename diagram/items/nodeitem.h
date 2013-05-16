#ifndef NODEITEM_H
#define NODEITEM_H

#include <QGraphicsItem>
#include "diagram/fourdirection.h"
#include "nodelabelitem.h"
#include "linkanchor.h"

class NodeItem
{
public:

    static const float OFFSET;

    NodeItem(bool placement,
             QGraphicsItem* graphicsItem);
    ~NodeItem();

    bool showAnchors();
    void setShowAnchors(bool showAnchors);
    QGraphicsItem* graphicsItem();
    NodeLabelItem* labelItem() const;
    FourDirection labelDirection();

    virtual QRectF itemSize() const = 0;
    virtual QRectF size() const = 0;

protected:

    void setLabel(QString label, FourDirection labelDirection);

    QPointF labelPosition();
    Qt::Alignment labelAlignment();
    QPointF anchorPosition(FourDirection direction);

private:

    bool _placement;
    bool _showAnchors;
    QGraphicsItem* _graphicsItem;
    NodeLabelItem* _labelItem;
    FourDirection _labelDirection;
    QList<LinkAnchor*> _anchorList;

};

#endif // NODEITEM_H
