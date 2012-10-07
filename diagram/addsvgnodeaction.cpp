#include "addsvgnodeaction.h"
#include "diagramview.h"

AddSvgNodeAction::AddSvgNodeAction(DiagramView* diagramView, QString label, QString filePath) :
  FreePointAction(diagramView),
  label(label),
  renderer(diagramView->getSvgRenderer(filePath))
{
}

void AddSvgNodeAction::execute()
{
  this->diagramView->getScene().addItem(new SvgNodeItem(this->point, this->renderer));
}
