#ifndef NODE_H
#define NODE_H

#include <QPoint>
#include <QPainter>
#include <QImage>
#include <QWidget>
#include <QSvgRenderer>

class Node
{
public:
  Node(QPoint p, QWidget * parent);

  void setSelected(bool selected);
  QPoint p();

  void paint(QPainter & painter);

private:
  QWidget * parent;
  QSvgRenderer * image;
  QPoint topleft;
  QPoint pp;
  QImage buffer;
  bool selected;
};

#endif // NODE_H
