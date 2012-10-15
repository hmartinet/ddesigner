#include "moveitemmode.h"

MoveItemMode::MoveItemMode(DiagramView *view) :
  DiagramMode(view)
{
}

void MoveItemMode::paintSelection(QGraphicsItem *item, QPainter *painter)
{
  painter->save();
  painter->setPen(QPen(Qt::darkGray, 0, Qt::DotLine));
  painter->setBrush(Qt::NoBrush);
  painter->drawRect(item->boundingRect());
  painter->restore();
}

bool MoveItemMode::mousePressEvent(QMouseEvent *e)
{
  return false;
}

bool MoveItemMode::mouseMoveEvent(QMouseEvent *e)
{
  return false;
}
