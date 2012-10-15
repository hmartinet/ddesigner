
#include <QPainter>
#include <QStyle>
#include "diagramview.h"
#include "svgnodeitem.h"
#include "nodelabelitem.h"

SvgNodeItem::SvgNodeItem(DiagramView* diagramView, QPointF position,
                         QSvgRenderer* renderer, const QString& label,
                         bool placement) :
  QGraphicsSvgItem(),
  diagramView(diagramView),
  placement(placement)
{
  setOpacity(placement ? .5 : 1.);
  setSharedRenderer(renderer);
  setCenter(position);
  if (!placement)
    {
      setFlag(QGraphicsItem::ItemIsSelectable);
      setFlag(QGraphicsItem::ItemIsMovable);
      setFlag(QGraphicsItem::ItemSendsGeometryChanges);

      new NodeLabelItem(label, this);
  }
}

SvgNodeItem::~SvgNodeItem()
{
}

void SvgNodeItem::setCenter(QPointF center)
{
  setPos(center - QPointF(boundingRect().width() / 2 - DiagramView::SELECTION_OFFSET,
                          boundingRect().height() / 2 - DiagramView::SELECTION_OFFSET));
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

  if (option->state & QStyle::State_Selected)
    {
      diagramView->getMode()->paintSelection(this, painter);
    }
}
