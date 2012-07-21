#include "node.h"

Node::Node(QPoint p) :
  pp(p)
{
}

QPoint Node::p()
{
  return pp;
}

void Node::paint(QPainter & painter)
{
  painter.setBrush(Qt::darkRed);
  painter.setPen(Qt::NoPen);

  painter.drawEllipse(pp, 5, 5);
}
