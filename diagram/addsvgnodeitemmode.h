#ifndef ADDSVGNODEITEMMODE_H
#define ADDSVGNODEITEMMODE_H

#include <QGraphicsView>
#include <QSvgRenderer>
#include "diagrammode.h"
#include "diagramview.h"
#include "svgnodeitem.h"

class AddSvgNodeItemMode : public DiagramMode
{
public:
  AddSvgNodeItemMode(DiagramView* view,
                     QSvgRenderer* renderer,
                     const QString label);
  ~AddSvgNodeItemMode();

  bool mousePressEvent(QMouseEvent* e);
  bool mouseMoveEvent(QMouseEvent* e);
  bool enterEvent(QEvent* e);
  bool leaveEvent(QEvent* e);

protected:
  void addNode(QPointF position);

private:
  QSvgRenderer* renderer;
  QString label;
  SvgNodeItem* placementItem;
};

#endif // ADDSVGNODEITEMMODE_H
