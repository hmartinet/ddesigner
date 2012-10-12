#ifndef NODELABELITEM_H
#define NODELABELITEM_H

#include <QGraphicsSvgItem>
#include <QPointF>
#include <QSvgRenderer>

class NodeLabelItem : public QGraphicsTextItem
{
public:
  NodeLabelItem(const QString& text, QGraphicsItem* parent = 0);

private:

};

#endif // NODELABELITEM_H
