#ifndef SVGNODEITEM_H
#define SVGNODEITEM_H

#include <QGraphicsSvgItem>
#include <QPointF>
#include <QSvgRenderer>

class SvgNodeItem : public QGraphicsSvgItem
{
public:
  SvgNodeItem(QPointF position, QSvgRenderer* renderer);

private:

};

#endif // SVGNODEITEM_H
