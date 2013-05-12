#ifndef SVGNODEITEM_H
#define SVGNODEITEM_H

#include <QGraphicsSvgItem>
#include <QSvgRenderer>
#include <QGraphicsRectItem>
#include "../fourdirection.h"
#include "nodeitem.h"

class NodeSvgItem : public QGraphicsSvgItem, public NodeItem {
public:
    NodeSvgItem(QPointF position, const QString& label,
                FourDirection labelDirection,
                bool placement,
                QSvgRenderer* renderer);
    ~NodeSvgItem();

    QPointF center();
    void setCenter(QPointF center);
    QPointF relativeCenter();

    QRectF itemSize() const;
    QRectF size() const;
    QRectF boundingRect () const;

private:
    QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant &value);
};

#endif // SVGNODEITEM_H
