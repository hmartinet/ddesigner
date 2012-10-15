#include "optionsstackedwidget.h"

OptionsStackedWidget::OptionsStackedWidget(QWidget *parent) :
  QStackedWidget(parent)
{
}

void OptionsStackedWidget::showSelectionOptions()
{
  this->setCurrentIndex(SELECTION_OPTIONS_INDEX);
}

void OptionsStackedWidget::showNodeOptions()
{
  this->setCurrentIndex(NODE_OPTIONS_INDEX);
}
