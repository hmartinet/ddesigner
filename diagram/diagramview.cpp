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

#include "diagramview.h"
#include "freepointaction.h"

DiagramView::DiagramView(QWidget *parent) :
  QGraphicsView(parent)
{
  this->scene.setSceneRect(0,0,1,1);
  this->setScene(&this->scene);
}

void DiagramView::mousePressEvent(QMouseEvent *e)
{
  if(e->button() == Qt::LeftButton)
    {
      if (actionPool.isFreePointAction())
        {
          actionPool.getFreePointAction()->setPoint(this->mapToScene(e->pos()));
          actionPool.getFreePointAction()->execute();
        }
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

QGraphicsScene &DiagramView::getScene()
{
  return this->scene;
}

