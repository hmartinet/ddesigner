#ifndef ADDNODEACTIONMODE_H
#define ADDNODEACTIONMODE_H

#include "diagramactionmode.h"

class AddNodeActionMode : public DiagramActionMode
{
public:
  AddNodeActionMode(QGraphicsScene* scene);

  void mousePressEvent(QMouseEvent* e);
};

#endif // ADDNODEACTIONMODE_H
