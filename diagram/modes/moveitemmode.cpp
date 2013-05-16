#include "moveitemmode.h"

MoveItemMode::MoveItemMode(DiagramView* diagramView) :
    DiagramMode(),
    DiagramController(diagramView)
{
}

MoveItemMode::~MoveItemMode()
{
    diagramView()->diagramScene()->unselectAll();
}

bool MoveItemMode::mouseMoveEvent(QMouseEvent *e)
{
    return false;
}

bool MoveItemMode::mousePressEvent(QMouseEvent *e)
{
    return false;
}

