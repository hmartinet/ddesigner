#ifndef DIAGRAMMODE_H
#define DIAGRAMMODE_H

#include <QMouseEvent>
#include <QGraphicsItem>
#include <QPainter>

class DiagramMode
{
public:
  DiagramMode();
  virtual ~DiagramMode();

  virtual void paintSelection(QGraphicsItem* item, QPainter* painter);
  virtual bool mousePressEvent(QMouseEvent* e);
  virtual bool mouseMoveEvent(QMouseEvent* e);
  virtual bool enterEvent(QEvent* e);
  virtual bool leaveEvent(QEvent* e);

};

#endif // DIAGRAMMODE_H
