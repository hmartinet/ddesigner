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
#include <QPointF>
#include "diagramscene.h"
#include "modes/diagrammode.h"
#include "fourdirection.h"

class DiagramView : public QGraphicsView
{
    Q_OBJECT

public:
    explicit DiagramView(QWidget* parent = 0);

    QSvgRenderer* getSvgRenderer(QString filePath);
    DiagramMode* mode();
    FourDirection defaultLabelPosition();

    QPointF snapToGrid(const QPointF &point) const;
    QPointF mapToScene(const QPoint &point) const;

    void addItem(NodeItem* item);
    void removeItem(NodeItem* item);
    QGraphicsItem* itemAt(const QPointF &pos);

    DiagramScene* diagramScene();

protected:
    void mousePressEvent(QMouseEvent* e);
    void mouseMoveEvent(QMouseEvent* e);
    void enterEvent(QEvent* e);
    void leaveEvent(QEvent* e);

private:
    DiagramScene* _diagramScene;
    DiagramMode* _mode;

    FourDirection _defaultLabelPosition;

    QMap<QString, QSvgRenderer*> _svgRendererPool;

public slots:
    void setDefaultLabelPosition(int labelPositionIndex);
    void setAddNodeMode(QListWidgetItem *item);
    void setSelectionMode();
    void setLinkMode();
    void setDisplayGrid(bool displayGrid);
};

#endif // DIAGRAMVIEW_H
