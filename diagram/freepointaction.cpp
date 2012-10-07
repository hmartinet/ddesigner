#include "freepointaction.h"

FreePointAction::FreePointAction(DiagramView* diagramView) :
  DiagramAction(diagramView)
{
}

void FreePointAction::setPoint(QPointF point)
{
  this->point = point;
}
