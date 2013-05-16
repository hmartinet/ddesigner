#ifndef NOACTIONMODE_H
#define NOACTIONMODE_H

#include <QMouseEvent>
#include "diagrammode.h"

class NoActionMode : public DiagramMode
{
public:
  NoActionMode();

  void paintSelection(QPainter* painter);
  bool mousePressEvent(QMouseEvent* e);
};

#endif // NOACTIONMODE_H
