#ifndef MOVEITEMMODE_H
#define MOVEITEMMODE_H

#include <QMouseEvent>
#include <QGraphicsItem>
#include "diagrammode.h"
#include "diagramview.h"

class MoveItemMode: public DiagramMode
{
public:
  MoveItemMode(DiagramView* view);

  void paintSelection(QGraphicsItem* item, QPainter* painter);
  bool mousePressEvent(QMouseEvent* e);
  bool mouseMoveEvent(QMouseEvent* e);
};

#endif // MOVEITEMMODE_H
