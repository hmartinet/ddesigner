#ifndef ADDSVGNODEITEMMODE_H
#define ADDSVGNODEITEMMODE_H

#include <QGraphicsView>
#include <QSvgRenderer>
#include "diagrammode.h"
#include "../diagramview.h"
#include "diagram/diagramcontroller.h"
#include "../items/nodesvgitem.h"

class AddNodeSvgItemMode : public DiagramMode, protected DiagramController
{
public:
    AddNodeSvgItemMode(DiagramView* diagramView,
                       QSvgRenderer* renderer,
                       const QString label);
    ~AddNodeSvgItemMode();

    bool mousePressEvent(QMouseEvent* e);
    bool mouseMoveEvent(QMouseEvent* e);
    bool enterEvent(QEvent* e);
    bool leaveEvent(QEvent* e);

protected:
    void addNode(QPointF position);

private:
    QSvgRenderer* renderer;
    QString label;
    NodeSvgItem* placementItem;
};

#endif // ADDSVGNODEITEMMODE_H
