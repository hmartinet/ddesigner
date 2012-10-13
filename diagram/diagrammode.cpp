#include "diagrammode.h"

DiagramMode::DiagramMode(QGraphicsView* view):
  view(view)
{
}

bool DiagramMode::mousePressEvent(QMouseEvent *e)
{
  return false;
}
