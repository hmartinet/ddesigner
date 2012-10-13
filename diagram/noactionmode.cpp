#include "noactionmode.h"

NoActionMode::NoActionMode(QGraphicsView* view) :
  DiagramMode(view)
{
}

bool NoActionMode::mousePressEvent(QMouseEvent *e)
{
  return false;
}
