
#include <QDebug>
#include <QPointF>
#include "addsvgnodeitemmode.h"
#include "svgnodeitem.h"

AddSvgNodeItemMode::AddSvgNodeItemMode(QGraphicsView* view,
                                       QSvgRenderer* renderer,
                                       const QString label) :
  DiagramMode(view),
  renderer(renderer),
  label(label)
{
}

void AddSvgNodeItemMode::mousePressEvent(QMouseEvent *e)
{
    if(e->button() == Qt::LeftButton)
      {
        this->addNode(this->view->mapToScene(e->pos()));
      }
}

void AddSvgNodeItemMode::addNode(QPointF position)
{
  this->view->scene()->addItem(new SvgNodeItem(position, this->renderer, this->label));
}
