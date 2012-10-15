#ifndef SVGNODEITEM_H
#define SVGNODEITEM_H

#include <QGraphicsSvgItem>
#include <QPointF>
#include <QSvgRenderer>
#include <QStyleOptionGraphicsItem>
#include <QWidget>
#include "diagramview.h"

class SvgNodeItem : public QGraphicsSvgItem
{
public:
  SvgNodeItem(DiagramView* diagramView, QPointF position,
              QSvgRenderer* renderer, const QString& label,
              bool placement=false);
  ~SvgNodeItem();

  void setCenter(QPointF center);

  QRectF boundingRect() const;
  void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

private:
  DiagramView* diagramView;
  bool placement;

};

#endif // SVGNODEITEM_H
