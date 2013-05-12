#ifndef NODETYPEITEM_H
#define NODETYPEITEM_H

#include <QListWidgetItem>
#include <QSvgRenderer>
#include <QVariant>

class NodeTypeItem : public QListWidgetItem
{
public:
    explicit NodeTypeItem(QString label, QString filePath, QListWidget *parent);

    bool applyFilter(QString filter, bool categoryHidden);
};

#endif // NODETYPEITEM_H
