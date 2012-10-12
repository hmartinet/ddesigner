#ifndef DIAGRAMACTIONMODE_H
#define DIAGRAMACTIONMODE_H

#include <QGraphicsScene>
#include <QMouseEvent>

class DiagramActionMode
{
public:
  DiagramActionMode(QGraphicsScene* scene);

  virtual void mousePressEvent(QMouseEvent* e);
};

#endif // DIAGRAMACTIONMODE_H
