#ifndef LINKANCHOR_H
#define LINKANCHOR_H

#include <QGraphicsPolygonItem>
#include <QBrush>
#include <QPen>
#include "diagram/itemdata.h"

class LinkAnchor : public QGraphicsPolygonItem
{
public:
    LinkAnchor(QGraphicsItem* parent);

    QPointF center();
    void setCenter(QPointF center);
    QPointF relativeCenter();
    void setHighlighted(bool highlighted);

private:
    static QPolygonF makePolygon();
};

#endif // LINKANCHOR_H
