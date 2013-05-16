#include "noactionmode.h"

NoActionMode::NoActionMode() :
  DiagramMode()
{
}

void NoActionMode::paintSelection(QPainter *painter)
{
}

bool NoActionMode::mousePressEvent(QMouseEvent *e)
{
  return false;
}
