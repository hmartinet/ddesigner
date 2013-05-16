#include "diagramcontroller.h"

DiagramController::DiagramController(DiagramView* diagramView) :
    _diagramView(diagramView)
{
}

DiagramView *DiagramController::diagramView()
{
    return _diagramView;
}
