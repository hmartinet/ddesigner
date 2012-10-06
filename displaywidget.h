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

#ifndef DISPLAYWIDGET_H
#define DISPLAYWIDGET_H

#include <QColor>
#include <QWidget>
#include <QList>
#include <QPoint>
#include "networkdiagram/networkdiagramview.h"
#include "networkdiagram/nodelink.h"

class DisplayWidget : public QWidget
{
  Q_OBJECT

public:
  enum DesignMode {
    FREE_POINT,         // Get a new point
    SELECT_NODE,        // Get an existing node
    SELECT_NODE_LINK    // Get an existing node link
  };

  explicit DisplayWidget(QWidget* parent = 0);

public slots:
  void setNodeMode();
  void setNodeLinkMode();

protected:
  void mousePressEvent(QMouseEvent* e);
  void mouseMoveEvent(QMouseEvent* e);
  void enterEvent(QEvent* e);
  void leaveEvent(QEvent* e);
  void paintEvent(QPaintEvent*);

private:
  NetworkDiagramView networkDiagram;
  DesignMode designMode;
};

#endif
