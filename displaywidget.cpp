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

using namespace std;

DisplayWidget::DisplayWidget(QWidget*parent):QWidget(parent){
  QPalette Pal(palette());
  Pal.setColor(QPalette::Background, Qt::white);
  setAutoFillBackground(true);
  setPalette(Pal);
  setMouseTracking(true);
  pointList = QList<QPoint>();
}

void DisplayWidget::mousePressEvent(QMouseEvent * e)
{
  if(e->button() == Qt::LeftButton)
    {
      pointList.append(QPoint(e->x(), e->y()));
    }

  update();
}

void DisplayWidget::mouseMoveEvent(QMouseEvent* e)
{
  if (!pointList.isEmpty())
    {
      pointList.last().setX(e->x());
      pointList.last().setY(e->y());
      update();
    }
}

void DisplayWidget::enterEvent(QEvent* e)
{
  pointList.append(QPoint(0, 0));
  update();
}

void DisplayWidget::leaveEvent(QEvent* e)
{
  pointList.removeLast();
  update();
}

void DisplayWidget::paintEvent(QPaintEvent *)
{
  QStyleOption opt;
  opt.init(this);
  QPainter painter(this);
  painter.setRenderHint(QPainter::Antialiasing, true);

  painter.setPen(Qt::black);
  QPoint last = pointList.first();
  for (int i=1; i<pointList.size(); i++)
    {
      QPoint current = pointList.at(i);
      if (underMouse() && i==pointList.size()-1)
        {
          painter.setPen(Qt::lightGray);
        }
      painter.drawLine(last, current);
      last = current;
    }
}


