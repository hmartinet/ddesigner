#ifndef OPTIONSSTACKEDWIDGET_H
#define OPTIONSSTACKEDWIDGET_H

#include <QStackedWidget>

class OptionsStackedWidget : public QStackedWidget
{
  Q_OBJECT
public:
  static const int SELECTION_OPTIONS_INDEX = 0;
  static const int NODE_OPTIONS_INDEX = 1;

  explicit OptionsStackedWidget(QWidget *parent = 0);
  
public slots:
  void showSelectionOptions();
  void showNodeOptions();
  
};

#endif // OPTIONSSTACKEDWIDGET_H
