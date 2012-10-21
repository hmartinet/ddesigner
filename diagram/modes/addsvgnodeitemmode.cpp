
#include <QDebug>
#include <QPointF>
#include "addsvgnodeitemmode.h"

AddSvgNodeItemMode::AddSvgNodeItemMode(DiagramView* view,
                                       QSvgRenderer* renderer,
                                       const QString label) :
  DiagramMode(view),
  renderer(renderer),
  label(label)
{
  placementItem = new SvgNodeItem(view, QPointF(0, 0), renderer, label, true);
}

AddSvgNodeItemMode::~AddSvgNodeItemMode()
{
  delete placementItem;
}

bool AddSvgNodeItemMode::mousePressEvent(QMouseEvent *e)
{
    if(e->button() == Qt::LeftButton)
      {
        addNode(view->mapToScene(e->pos()));
        return true;
      }

    return false;
}

bool AddSvgNodeItemMode::mouseMoveEvent(QMouseEvent *e)
{
  placementItem->setCenter(view->mapToScene(e->pos()));
  return true;
}

bool AddSvgNodeItemMode::enterEvent(QEvent *e)
{
  view->scene()->addItem(placementItem);
  return true;
}

bool AddSvgNodeItemMode::leaveEvent(QEvent *e)
{
  view->scene()->removeItem(placementItem);
  return true;
}

void AddSvgNodeItemMode::addNode(QPointF position)
{
  view->scene()->addItem(
        new SvgNodeItem(view, position, renderer, label));
}
