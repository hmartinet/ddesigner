#ifndef NODETYPEITEM_H
#define NODETYPEITEM_H

#include <QListWidgetItem>

class NodeTypeItem : public QListWidgetItem
{
public:
  explicit NodeTypeItem(QString label, QString filePath, QListWidget *parent);
};

#endif // NODETYPEITEM_H
