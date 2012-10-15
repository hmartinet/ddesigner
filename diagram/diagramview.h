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

#ifndef DIAGRAMVIEW_H
#define DIAGRAMVIEW_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QMap>
#include <QSvgRenderer>
#include <QMouseEvent>
#include <QListWidgetItem>
#include "diagrammode.h"

class DiagramView : public QGraphicsView
{
  Q_OBJECT

public:
  static const int SELECTION_OFFSET = 4;

  explicit DiagramView(QWidget* parent = 0);

  QSvgRenderer* getSvgRenderer(QString filePath);
  DiagramMode* getMode();

protected:
  void mousePressEvent(QMouseEvent* e);
  void mouseMoveEvent(QMouseEvent* e);
  void enterEvent(QEvent* e);
  void leaveEvent(QEvent* e);

private:
  DiagramMode* mode;

  QMap<QString, QSvgRenderer*> svgRendererPool;

public slots:
  void createAction(QListWidgetItem *item);
  void setSelectionMode();
};

#endif // DIAGRAMVIEW_H
