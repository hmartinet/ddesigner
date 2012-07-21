#include "node.h"

#include <QSvgRenderer>

Node::Node(QPoint p, QWidget * parent) :
  pp(p),
  parent(parent)
{
  QSvgRenderer * doc = new QSvgRenderer(QString(":/resources/shapes/computer-hp-pavilion-t3700.svg"));
  buffer = QImage(parent->size(), QImage::Format_ARGB32_Premultiplied);
  QPainter painter(&buffer);
  painter.setViewport(0, 0, 64, 64);
  doc->render(&painter);
}

QPoint Node::p()
{
  return pp;
}

void Node::paint(QPainter & painter)
{
  painter.setBrush(Qt::darkRed);
  painter.setPen(Qt::NoPen);

  painter.drawImage(pp.x()-32, pp.y()-32, buffer);
}
