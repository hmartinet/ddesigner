#include "moveitemmode.h"

MoveItemMode::MoveItemMode(DiagramView *view) :
    DiagramMode(view)
{
}

bool MoveItemMode::mouseMoveEvent(QMouseEvent *e)
{
    return false;
}

bool MoveItemMode::mousePressEvent(QMouseEvent *e)
{
    return false;
}

