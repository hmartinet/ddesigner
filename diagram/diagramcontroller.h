#ifndef DIAGRAMCONTROLLER_H
#define DIAGRAMCONTROLLER_H

#include "diagram/diagramview.h"

class DiagramView;

class DiagramController
{
public:
    DiagramController(DiagramView* diagramView);

    DiagramView* diagramView();

private:
    DiagramView* _diagramView;

};

#endif // DIAGRAMCONTROLLER_H
