#ifndef DIAGRAMMODE_H
#define DIAGRAMMODE_H

#include <QGraphicsView>
#include <QMouseEvent>

class DiagramMode
{
public:
  DiagramMode(QGraphicsView* view);

  virtual bool mousePressEvent(QMouseEvent* e);

protected:
  QGraphicsView* view;
};

#endif // DIAGRAMMODE_H
