#include "svgnodeitem.h"
#include "nodelabelitem.h"

SvgNodeItem::SvgNodeItem(QPointF position, QSvgRenderer* renderer, const QString& label) :
  QGraphicsSvgItem()
{
  this->setSharedRenderer(renderer);
  this->setPos(position - QPointF(this->boundingRect().width() / 2, this->boundingRect().height() / 2));

  new NodeLabelItem(label, this);
}
