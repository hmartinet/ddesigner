#ifndef ADDSVGNODEITEMMODE_H
#define ADDSVGNODEITEMMODE_H

#include <QGraphicsView>
#include <QSvgRenderer>
#include "diagrammode.h"

class AddSvgNodeItemMode : public DiagramMode
{
public:
  AddSvgNodeItemMode(QGraphicsView* view,
                     QSvgRenderer* renderer,
                     const QString label);

  void mousePressEvent(QMouseEvent* e);

protected:
  void addNode(QPointF position);

private:
  QSvgRenderer* renderer;
  QString label;
};

#endif // ADDSVGNODEITEMMODE_H
