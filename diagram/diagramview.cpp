/****************************************************************************
**
** Copyright 2012 Hervé Martinet
**
** This file is part of NetDesigner.
**
** NetDesigner is free software: you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation, either version 3 of the License, or
** (at your option) any later version.
**
** NetDesigner is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with Foobar. If not, see <http://www.gnu.org/licenses/>.
**
****************************************************************************/

#include <QDebug>
#include "diagramview.h"
#include "modes/noactionmode.h"
#include "modes/moveitemmode.h"
#include "modes/addnodesvgitemmode.h"
#include "modes/linkmode.h"
#include "diagramscene.h"

DiagramView::DiagramView(QWidget *parent) :
    QGraphicsView(parent),
    _mode(new NoActionMode(this))
{
    setScene(_diagramScene = new DiagramScene(this));
    diagramScene()->setSceneRect(0,0,1,1);
}

void DiagramView::mousePressEvent(QMouseEvent* e)
{
    if (!mode()->mousePressEvent(e))
    {
        QGraphicsView::mousePressEvent(e);
    }
}

void DiagramView::mouseMoveEvent(QMouseEvent* e)
{
    if (!mode()->mouseMoveEvent(e))
    {
        QGraphicsView::mouseMoveEvent(e);
    }
}

void DiagramView::enterEvent(QEvent *e)
{
    if (!mode()->enterEvent(e))
    {
        QGraphicsView::enterEvent(e);
    }
}

void DiagramView::leaveEvent(QEvent *e)
{
    if (!mode()->leaveEvent(e))
    {
        QGraphicsView::leaveEvent(e);
    }
}

void DiagramView::setDefaultLabelPosition(int labelPositionIndex)
{
    _defaultLabelPosition = FourDirection(labelPositionIndex);
}

QSvgRenderer* DiagramView::getSvgRenderer(QString filePath)
{
    if (!_svgRendererPool.contains(filePath))
    {
        QSvgRenderer* renderer = new QSvgRenderer(filePath);
        renderer->setViewBox(renderer->viewBox().adjusted(
                                 -NodeItem::OFFSET, -NodeItem::OFFSET,
                                 NodeItem::OFFSET, NodeItem::OFFSET));
        _svgRendererPool.insert(filePath, renderer);
    }
    return _svgRendererPool.value(filePath);
}

DiagramMode *DiagramView::mode()
{
    return _mode;
}

FourDirection DiagramView::defaultLabelPosition()
{
    return _defaultLabelPosition;
}

QPointF DiagramView::snapToGrid(const QPointF &point) const
{
    return _diagramScene->nearestValid(point);
}

QPointF DiagramView::mapToScene(const QPoint &point) const
{
    return _diagramScene->nearestValid(QGraphicsView::mapToScene(point));
}

void DiagramView::addItem(NodeItem *item)
{
    diagramScene()->addNodeItem(item);
}

void DiagramView::removeItem(NodeItem *item)
{
    diagramScene()->removeNodeItem(item);
}

QGraphicsItem *DiagramView::itemAt(const QPointF &pos)
{
    return scene()->itemAt(pos);
}

DiagramScene *DiagramView::diagramScene()
{
    return _diagramScene;
}

void DiagramView::setAddNodeMode(QListWidgetItem *item)
{
    QString type = item->data(Qt::UserRole).toString();

    if (type == "svg") {
        QString label = item->data(Qt::UserRole + 1).toString();
        QString filePath = item->data(Qt::UserRole + 2).toString();

        delete _mode;
        _mode = new AddNodeSvgItemMode(this,
                                            this->getSvgRenderer(filePath),
                                            label);
    }
}

void DiagramView::setSelectionMode()
{
    delete _mode;
    _mode = new MoveItemMode(this);
}

void DiagramView::setLinkMode()
{
    delete _mode;
    _mode = new LinkMode(this);
}

void DiagramView::setDisplayGrid(bool displayGrid)
{
    diagramScene()->setDisplayGrid(displayGrid);
}

