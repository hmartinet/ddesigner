#include "nodetypeitem.h"

NodeTypeItem::NodeTypeItem(QString label, QString filePath, QListWidget *parent) :
  QListWidgetItem(QIcon(filePath), label, parent)
{
  setSizeHint(QSize(1, 48));

  setData(Qt::UserRole, "svg");
  setData(Qt::UserRole + 1, label);
  setData(Qt::UserRole + 2, filePath);
}

bool NodeTypeItem::applyFilter(QString filter, bool categoryHidden)
{
    if (text().contains(filter, Qt::CaseInsensitive)) {
        setHidden(categoryHidden);
        return true;
    } else {
        setHidden(true);
        return false;
    }
}

