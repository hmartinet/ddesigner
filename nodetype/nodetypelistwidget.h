#ifndef NODETYPELISTWIDGET_H
#define NODETYPELISTWIDGET_H

#include <QListWidget>
#include <QFile>
#include <QDebug>
#include <QListWidgetItem>
#include <QTextStream>
#include "qjson/qobjecthelper.h"
#include "qjson/parser.h"
#include "nodetypecategoryitem.h"
#include "nodetypeitem.h"

class NodeTypeListWidget : public QListWidget
{
    Q_OBJECT

public:
    explicit NodeTypeListWidget(QWidget *parent = 0);
    void applyFilter(QString filter);

private:
    QList<NodeTypeCategoryItem*> nodeLibrary;
    QString filter;

};

#endif // NODETYPELISTWIDGET_H
