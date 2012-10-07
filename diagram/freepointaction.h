#ifndef FREEPOINTACTION_H
#define FREEPOINTACTION_H

#include <QPointF>
#include "diagramaction.h"

class FreePointAction : public DiagramAction
{
public:
  FreePointAction(DiagramView* diagramView);

  void setPoint(QPointF point);

protected:
  QPointF point;
};

#endif // FREEPOINTACTION_H
