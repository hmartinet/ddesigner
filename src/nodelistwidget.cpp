#include <QListWidgetItem>
#include "nodelistwidget.h"

NodeListWidget::NodeListWidget(QWidget *parent) :
  QListWidget(parent)
{
  new QListWidgetItem(tr("Oak"), this);
  new QListWidgetItem(tr("Fir"), this);
  new QListWidgetItem(tr("Pine"), this);
}
