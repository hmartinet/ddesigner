#ifndef DIAGRAMACTION_H
#define DIAGRAMACTION_H

class DiagramView;

class DiagramAction
{
public:
  DiagramAction(DiagramView* diagramView);

  virtual void execute();

protected:
  DiagramView* diagramView;
};

#endif // DIAGRAMACTION_H
