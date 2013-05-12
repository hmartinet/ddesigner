
#include "nodetypecategoryitem.h"
#include "nodetypecategoryitemconnector.h"

#include <QDebug>
#include <QStyledItemDelegate>

NodeTypeCategoryItem::NodeTypeCategoryItem(QString label, QListWidget *parent) :
    QListWidgetItem(parent),
    hidden(false)
{
    QPushButton *button = new QPushButton(label);
    button->setObjectName("categoryButton");
    button->setCheckable(true);
    button->setFocusPolicy(Qt::NoFocus);
    button->setMinimumHeight(20);
    button->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);

    parent->setItemWidget(this, button);

    setSizeHint(button->sizeHint());

    QObject::connect(button, SIGNAL(clicked()), new NodeTypeCategoryItemConnector(this), SLOT(toggleState()));
}

void NodeTypeCategoryItem::addNode(NodeTypeItem* nodeItem)
{
    nodeItemList << nodeItem;
}

void NodeTypeCategoryItem::toggleState()
{
    hidden = !hidden;
    foreach (NodeTypeItem* t, nodeItemList) {
        t->applyFilter(filter, hidden);
    }
}

void NodeTypeCategoryItem::applyFilter(QString filter)
{
    this->filter = filter;
    bool visible = false;
    foreach (NodeTypeItem* t, nodeItemList) {
        visible += t->applyFilter(filter, hidden);
    }
    setHidden(!visible);
}

