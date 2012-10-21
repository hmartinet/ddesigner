#ifndef SVGNODEITEM_H
#define SVGNODEITEM_H

#include <QGraphicsSvgItem>
#include <QPointF>
#include <QSvgRenderer>
#include <QStyleOptionGraphicsItem>
#include <QWidget>
#include <QVariant>
#include "../diagramview.h"

class SvgNodeItem : public QGraphicsSvgItem
{
public:
  SvgNodeItem(DiagramView* diagramView, QPointF position,
              QSvgRenderer* renderer, const QString& label,
              bool placement=false);
  ~SvgNodeItem();

  inline QPointF topLeft(QPointF center);
  inline QPointF center(QPointF topLeft);
  void setCenter(QPointF center);

  QRectF boundingRect() const;
  void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

private:
  DiagramView* diagramView;
  bool placement;

  QVariant itemChange(GraphicsItemChange change, const QVariant &value);

};

#endif // SVGNODEITEM_H
