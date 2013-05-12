#ifndef DIAGRAMMODE_H
#define DIAGRAMMODE_H

#include <QMouseEvent>
#include <QGraphicsItem>
#include <QPainter>

class DiagramView;

class DiagramMode
{
public:
  DiagramMode(DiagramView* diagramView);
  virtual ~DiagramMode();

  virtual void paintSelection(QGraphicsItem* item, QPainter* painter);
  virtual bool mousePressEvent(QMouseEvent* e);
  virtual bool mouseMoveEvent(QMouseEvent* e);
  virtual bool enterEvent(QEvent* e);
  virtual bool leaveEvent(QEvent* e);

protected:
  DiagramView* _diagramView;
};

#endif // DIAGRAMMODE_H
