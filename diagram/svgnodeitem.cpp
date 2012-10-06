#include "svgnodeitem.h"

SvgNodeItem::SvgNodeItem(QPointF position, QSvgRenderer* renderer) :
  QGraphicsSvgItem()
{
  this->setSharedRenderer(renderer);
  this->setPos(position - QPointF(this->boundingRect().width() / 2, this->boundingRect().height() / 2));
}
