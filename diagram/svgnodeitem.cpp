
#include <QPainter>
#include <QStyle>
#include "diagramview.h"
#include "svgnodeitem.h"
#include "nodelabelitem.h"

SvgNodeItem::SvgNodeItem(QPointF position, QSvgRenderer* renderer, const QString& label) :
  QGraphicsSvgItem()
{
  this->setSharedRenderer(renderer);
  this->setPos(position - QPointF(this->boundingRect().width() / 2 - DiagramView::SELECTION_OFFSET,
                                  this->boundingRect().height() / 2 - DiagramView::SELECTION_OFFSET));
  this->setFlag(QGraphicsItem::ItemIsSelectable);
  this->setFlag(QGraphicsItem::ItemIsMovable);
  this->setFlag(QGraphicsItem::ItemSendsGeometryChanges);

  new NodeLabelItem(label, this);
}

QRectF SvgNodeItem::boundingRect() const
{
  return QGraphicsSvgItem::boundingRect().adjusted(-DiagramView::SELECTION_OFFSET,
                                                   -DiagramView::SELECTION_OFFSET,
                                                   DiagramView::SELECTION_OFFSET,
                                                   DiagramView::SELECTION_OFFSET);
}

void SvgNodeItem::paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget)
{
  QStyleOptionGraphicsItem* tmpOption = new QStyleOptionGraphicsItem(*option);
  tmpOption->state &= ~QStyle::State_Selected;
  QGraphicsSvgItem::paint(painter, tmpOption, widget);

  if (option->state & (QStyle::State_Selected | QStyle::State_HasFocus))
    {
      painter->setPen(QPen(Qt::darkGray, 0, Qt::DotLine));
      painter->setBrush(Qt::NoBrush);
      painter->drawRect(this->boundingRect());
    }
}
