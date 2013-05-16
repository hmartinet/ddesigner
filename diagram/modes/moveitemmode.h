#ifndef MOVEITEMMODE_H
#define MOVEITEMMODE_H

#include <QMouseEvent>
#include <QGraphicsItem>
#include "diagrammode.h"
#include "../diagramview.h"
#include "diagram/diagramcontroller.h"

class MoveItemMode: public DiagramMode, protected DiagramController
{
public:
  MoveItemMode(DiagramView* diagramView);

  ~MoveItemMode();

  bool mouseMoveEvent(QMouseEvent* e);
  bool mousePressEvent(QMouseEvent* e);
};

#endif // MOVEITEMMODE_H
