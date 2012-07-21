#ifndef NODE_H
#define NODE_H

#include <QPoint>
#include <QPainter>
#include <QImage>
#include <QWidget>

class Node
{
public:
  Node(QPoint p, QWidget * parent);
  QPoint p();

  void paint(QPainter & painter);

private:
  QWidget * parent;
  QPoint pp;
  QImage buffer;
};

#endif // NODE_H
