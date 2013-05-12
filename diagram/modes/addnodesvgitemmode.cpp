
#include <QDebug>
#include <QPointF>
#include "addnodesvgitemmode.h"
#include "diagram/fourdirection.h"

AddNodeSvgItemMode::AddNodeSvgItemMode(DiagramView* diagramView,
                                       QSvgRenderer* renderer,
                                       const QString label) :
    DiagramMode(diagramView),
    renderer(renderer),
    label(label)
{
    placementItem = new NodeSvgItem(QPointF(0, 0),
                                    label, BOTTOM, true,
                                    renderer);
}

AddNodeSvgItemMode::~AddNodeSvgItemMode()
{
    delete placementItem;
}

bool AddNodeSvgItemMode::mousePressEvent(QMouseEvent *e)
{
    if(e->button() == Qt::LeftButton)
    {
        addNode(_diagramView->mapToScene(e->pos()));
        return true;
    }

    return false;
}

bool AddNodeSvgItemMode::mouseMoveEvent(QMouseEvent *e)
{
    placementItem->setCenter(_diagramView->mapToScene(e->pos()));
    return true;
}

bool AddNodeSvgItemMode::enterEvent(QEvent *e)
{
    _diagramView->scene()->addItem(placementItem);
    return true;
}

bool AddNodeSvgItemMode::leaveEvent(QEvent *e)
{
    _diagramView->scene()->removeItem(placementItem);
    return true;
}

void AddNodeSvgItemMode::addNode(QPointF position)
{
    _diagramView->addItem(
                new NodeSvgItem(position, label, BOTTOM, false, renderer));
}
