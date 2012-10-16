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
#include "noactionmode.h"
#include "moveitemmode.h"
#include "addsvgnodeitemmode.h"
#include "diagramscene.h"

DiagramView::DiagramView(QWidget *parent) :
  QGraphicsView(parent),
  mode(new NoActionMode(this))
{
  setScene(diagramScene = new DiagramScene(this));
  scene()->setSceneRect(0,0,1,1);
}

void DiagramView::mousePressEvent(QMouseEvent* e)
{
  if (!this->mode->mousePressEvent(e))
    {
      QGraphicsView::mousePressEvent(e);
  }
}

void DiagramView::mouseMoveEvent(QMouseEvent* e)
{
  if (!this->mode->mouseMoveEvent(e))
    {
      QGraphicsView::mouseMoveEvent(e);
  }
}

void DiagramView::enterEvent(QEvent *e)
{
  if (!this->mode->enterEvent(e))
    {
      QGraphicsView::enterEvent(e);
  }
}

void DiagramView::leaveEvent(QEvent *e)
{
  if (!this->mode->leaveEvent(e))
    {
      QGraphicsView::leaveEvent(e);
  }
}

QSvgRenderer* DiagramView::getSvgRenderer(QString filePath)
{
  if (!svgRendererPool.contains(filePath))
    {
      svgRendererPool.insert(filePath, new QSvgRenderer(filePath));
    }
  return svgRendererPool.value(filePath);
}

DiagramMode *DiagramView::getMode()
{
  return this->mode;
}

QPointF DiagramView::snapToGrid(const QPointF &point) const
{
  return diagramScene->nearestValid(point);
}

QPointF DiagramView::mapToScene(const QPoint &point) const
{
  return diagramScene->nearestValid(QGraphicsView::mapToScene(point));
}

void DiagramView::createAction(QListWidgetItem *item)
{
  QString type = item->data(Qt::UserRole).toString();

  if (type == "svg")
    {
      QString label = item->data(Qt::UserRole + 1).toString();
      QString filePath = item->data(Qt::UserRole + 2).toString();

      delete this->mode;
      this->mode = new AddSvgNodeItemMode(this,
                                          this->getSvgRenderer(filePath),
                                          label);
  }
}

void DiagramView::setSelectionMode()
{
  delete this->mode;
  this->mode = new MoveItemMode(this);
}

void DiagramView::setDisplayGrid(bool displayGrid)
{
  diagramScene->setDisplayGrid(displayGrid);
}

