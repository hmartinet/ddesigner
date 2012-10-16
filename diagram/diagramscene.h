#ifndef DIAGRAMSCENE_H
#define DIAGRAMSCENE_H

#include <QGraphicsScene>
#include <QPointF>

class DiagramScene : public QGraphicsScene
{
public:
  DiagramScene(QObject* parent);

  void setDisplayGrid(bool displayGrid);

  QPointF nearestValid(QPointF point);

protected:
  void drawBackground(QPainter* painter, const QRectF& rect);

private:
  bool displayGrid;
};

#endif // DIAGRAMSCENE_H
