#ifndef DIAGRAMSCENE_H
#define DIAGRAMSCENE_H

#include <QGraphicsScene>
#include <QPointF>
#include <QList>
#include "diagram/items/nodeitem.h"

class DiagramScene : public QGraphicsScene
{
public:
    DiagramScene(QObject* parent);

    void addNodeItem(NodeItem* nodeItem);
    void removeNodeItem(NodeItem* nodeItem);

    bool displayGrid();
    void setDisplayGrid(bool displayGrid);
    void setShowAnchors(bool showAnchors);

    QPointF nearestValid(QPointF point);

protected:
    QList<NodeItem*> nodeItemList();

    void drawBackground(QPainter* painter, const QRectF& rect);

private:
    bool _displayGrid;
    QList<NodeItem*> _nodeItemList;
};

#endif // DIAGRAMSCENE_H
