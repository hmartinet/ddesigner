#ifndef NODE_H
#define NODE_H

#include <QPoint>
#include <QPainter>

class Node
{
public:
  Node(QPoint p);
  QPoint p();

  void paint(QPainter & painter);

private:
  QPoint pp;
};

#endif // NODE_H
