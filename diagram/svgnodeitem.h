#ifndef SVGNODEITEM_H
#define SVGNODEITEM_H

#include <QGraphicsSvgItem>
#include <QPointF>
#include <QSvgRenderer>
#include <QStyleOptionGraphicsItem>
#include <QWidget>

class SvgNodeItem : public QGraphicsSvgItem
{
public:
  SvgNodeItem(QPointF position, QSvgRenderer* renderer, const QString& label);

  QRectF boundingRect() const;
  void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

};

#endif // SVGNODEITEM_H
