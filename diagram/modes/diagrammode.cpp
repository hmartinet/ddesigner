#include <QDebug>
#include "diagrammode.h"

DiagramMode::DiagramMode(DiagramView *diagramView):
  _diagramView(diagramView)
{
}

DiagramMode::~DiagramMode()
{
}

void DiagramMode::paintSelection(QGraphicsItem *item, QPainter *painter)
{
}

bool DiagramMode::mousePressEvent(QMouseEvent *e)
{
  return false;
}

bool DiagramMode::mouseMoveEvent(QMouseEvent *e)
{
  return false;
}

bool DiagramMode::enterEvent(QEvent *e)
{
  return false;
}

bool DiagramMode::leaveEvent(QEvent *e)
{
  return false;
}
