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

void DisplayWidget::setNodeMode()
{
  designMode = 0;
}

void DisplayWidget::setNodeLinkMode()
{
  designMode = 1;
}

void DisplayWidget::mousePressEvent(QMouseEvent * e)
{
  if(e->button() == Qt::LeftButton)
    {
      switch (designMode)
        {
        case 0:
          networkDiagram.getNodeList().append(new Node(QPoint(e->x(), e->y()), this));
          break;
        case 1:
          break;
        }
    }

  update();
}

void DisplayWidget::mouseMoveEvent(QMouseEvent* e)
{
  switch (designMode)
    {
    case 0:
      break;
    case 1:
      Node * selected = (Node *) 0;
      for (int i=0; i<networkDiagram.getNodeList().size(); i++)
        {
          if (networkDiagram.getNodeList()[i]->p().x() > e->x() - 32 &&
              networkDiagram.getNodeList()[i]->p().y() > e->y() - 32 &&
              networkDiagram.getNodeList()[i]->p().x() < e->x() + 32 &&
              networkDiagram.getNodeList()[i]->p().y() < e->y() + 32)
            {
              if (selected != (Node *) 0)
                {
                  selected->setSelected(false);
                }
              selected = networkDiagram.getNodeList()[i];
              selected->setSelected(true);
            }
          else
            {
              networkDiagram.getNodeList()[i]->setSelected(false);
            }
        }
      break;
    }
  update();
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


