#ifndef MOVEITEMMODE_H
#define MOVEITEMMODE_H

#include <QMouseEvent>
#include <QGraphicsItem>
#include "diagrammode.h"
#include "../diagramview.h"

class MoveItemMode: public DiagramMode
{
public:
  MoveItemMode(DiagramView* view);

  bool mouseMoveEvent(QMouseEvent* e);
  bool mousePressEvent(QMouseEvent* e);
};

#endif // MOVEITEMMODE_H
