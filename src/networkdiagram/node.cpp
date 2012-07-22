#include "node.h"

Node::Node(QPoint p, QWidget * parent) :
  pp(p),
  parent(parent),
  selected(false)
{
  image = new QSvgRenderer(QString(":/resources/shapes/computer-hp-pavilion-t3700.svg"));
  buffer = QImage(parent->size(), QImage::Format_ARGB32_Premultiplied);
  QPainter painter(&buffer);
  painter.setViewport(0, 0, 64, 64);
  topleft = QPoint(pp.x()-32, pp.y()-32);
  image->render(&painter);
  setSelected(false);
}

void Node::setSelected(bool selected)
{
  this->selected = selected;
}

QPoint Node::p()
{
  return pp;
}

void Node::paint(QPainter & painter)
{
  painter.setBrush(Qt::darkRed);
  painter.setPen(Qt::NoPen);

  painter.drawImage(topleft, buffer);
  if (selected)
    {
      painter.setPen(QPen(Qt::gray, 1, Qt::DotLine));
      painter.setBrush(Qt::NoBrush);
      painter.drawRect(QRect(topleft - QPoint(5, 5), QSize(74, 74)));
    }
}
