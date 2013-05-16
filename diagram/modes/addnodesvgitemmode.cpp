
#include <QDebug>
#include <QPointF>
#include "addnodesvgitemmode.h"
#include "diagram/fourdirection.h"

AddNodeSvgItemMode::AddNodeSvgItemMode(DiagramView* diagramView,
                                       QSvgRenderer* renderer,
                                       const QString label) :
    DiagramMode(),
    DiagramController(diagramView),
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
        addNode(diagramView()->mapToScene(e->pos()));
        return true;
    }

    return false;
}

bool AddNodeSvgItemMode::mouseMoveEvent(QMouseEvent *e)
{
    placementItem->setCenter(diagramView()->mapToScene(e->pos()));
    return true;
}

bool AddNodeSvgItemMode::enterEvent(QEvent *e)
{
    diagramView()->scene()->addItem(placementItem);
    return true;
}

bool AddNodeSvgItemMode::leaveEvent(QEvent *e)
{
    diagramView()->scene()->removeItem(placementItem);
    return true;
}

void AddNodeSvgItemMode::addNode(QPointF position)
{
    diagramView()->addItem(
                new NodeSvgItem(position, label, BOTTOM, false, renderer));
}
