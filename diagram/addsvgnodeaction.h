#ifndef ADDSVGNODEACTION_H
#define ADDSVGNODEACTION_H

#include <QSvgRenderer>
#include "freepointaction.h"
#include "svgnodeitem.h"

class AddSvgNodeAction : public FreePointAction
{
public:
  AddSvgNodeAction(DiagramView* diagramView, QString label, QString filePath);

  virtual void execute();

private:
  QString label;
  QSvgRenderer* renderer;
};

#endif // ADDSVGNODEACTION_H
