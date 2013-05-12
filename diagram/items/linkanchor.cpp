#include "linkanchor.h"

LinkAnchor::LinkAnchor(QGraphicsItem* parent) :
    QGraphicsPolygonItem(makePolygon(), parent)
{
    setData(ItemData::TYPE, QVariant(ItemType::ANCHOR));
    setHighlighted(false);
}

QPointF LinkAnchor::relativeCenter()
{
    return QPointF(boundingRect().width() / 2,
                   boundingRect().height() / 2);
}

void LinkAnchor::setHighlighted(bool highlighted)
{
    setBrush(QBrush(highlighted ? Qt::green : Qt::gray, Qt::SolidPattern));
    setPen(QPen(highlighted ? Qt::darkGreen : Qt::darkGray));
    update();
}

QPointF LinkAnchor::center()
{
    return pos() + relativeCenter();
}

void LinkAnchor::setCenter(QPointF center)
{
    setPos(center - relativeCenter());
}

QPolygonF LinkAnchor::makePolygon()
{
    QPolygonF basePolygon = QPolygonF();
    basePolygon.append(QPointF(0, 0));
    basePolygon.append(QPointF(0, 5));
    basePolygon.append(QPointF(5, 5));
    basePolygon.append(QPointF(5, 0));
    return basePolygon;
}
