#ifndef NOACTIONMODE_H
#define NOACTIONMODE_H

#include <QMouseEvent>
#include "diagrammode.h"
#include "diagramview.h"

class NoActionMode : public DiagramMode
{
public:
  NoActionMode(DiagramView *view);

  void paintSelection(QPainter* painter);
  bool mousePressEvent(QMouseEvent* e);
};

#endif // NOACTIONMODE_H
