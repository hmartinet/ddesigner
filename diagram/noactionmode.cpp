#include "noactionmode.h"

NoActionMode::NoActionMode(DiagramView* view) :
  DiagramMode(view)
{
}

void NoActionMode::paintSelection(QPainter *painter)
{
}

bool NoActionMode::mousePressEvent(QMouseEvent *e)
{
  return false;
}
