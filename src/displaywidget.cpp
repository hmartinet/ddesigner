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

#include <QtGui>
#include <QPalette>
#include "displaywidget.h"
#include "networkdiagram/node.h"
#include "networkdiagram/nodelink.h"

using namespace std;

DisplayWidget::DisplayWidget(QWidget*parent) :
  QWidget(parent),
  networkDiagram(NetworkDiagram())
{
  QPalette Pal(palette());
  Pal.setColor(QPalette::Background, Qt::white);
  setAutoFillBackground(true);
  setPalette(Pal);
  setMouseTracking(true);
}

void DisplayWidget::mousePressEvent(QMouseEvent * e)
{
  if(e->button() == Qt::LeftButton)
    {
      Node * n = new Node(QPoint(e->x(), e->y()), this);
      if (!networkDiagram.getNodeList().isEmpty())
        {
          networkDiagram.getNodeLinkList().append(new NodeLink(networkDiagram.getNodeList().last(), n));
        }
      networkDiagram.getNodeList().append(n);
    }

  update();
}

void DisplayWidget::mouseMoveEvent(QMouseEvent* e)
{
  if (!networkDiagram.getNodeList().isEmpty())
    {
      update();
    }
}

void DisplayWidget::enterEvent(QEvent* e)
{
  update();
}

void DisplayWidget::leaveEvent(QEvent* e)
{
  update();
}

void DisplayWidget::paintEvent(QPaintEvent *)
{
  QStyleOption opt;
  opt.init(this);
  QPainter painter(this);
  painter.setRenderHint(QPainter::Antialiasing, true);

  for (int i=0; i<networkDiagram.getNodeLinkList().size(); i++)
    {
      networkDiagram.getNodeLinkList()[i]->paint(painter);
    }

  for (int i=0; i<networkDiagram.getNodeList().size(); i++)
    {
      networkDiagram.getNodeList()[i]->paint(painter);
    }
}


