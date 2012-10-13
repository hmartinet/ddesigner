#ifndef NOACTIONMODE_H
#define NOACTIONMODE_H

#include <QGraphicsView>
#include <QMouseEvent>
#include "diagrammode.h"

class NoActionMode : public DiagramMode
{
public:
  NoActionMode(QGraphicsView* view);

  bool mousePressEvent(QMouseEvent* e);
};

#endif // NOACTIONMODE_H
