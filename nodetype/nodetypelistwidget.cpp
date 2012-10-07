
#include "nodetypelistwidget.h"

NodeTypeListWidget::NodeTypeListWidget(QWidget *parent) :
  QListWidget(parent)
{
  this->setIconSize(QSize(48, 48));

  QJson::Parser parser;
  QFile file("library/tango/descriptor.json");

  QMap<QString, QVariant> library = parser.parse(&file).toMap();
  QString libraryPath = "library/tango";
  foreach (QVariant vCategory, library.value("categories").toList())
    {
      QMap<QString, QVariant> category = vCategory.toMap();
      NodeTypeCategoryItem* categoryItem = new NodeTypeCategoryItem(category.value("label").toString(), this);
      QString categoryPath = libraryPath + "/" + category.value("name").toString();

      foreach (QVariant vType, category.value("types").toList())
        {
          QMap<QString, QVariant> type = vType.toMap();
          QString filePath = categoryPath + "/" + type.value("name").toString() + "." + type.value("imageType").toString();
          categoryItem->addNode(new NodeTypeItem(type.value("label").toString(), filePath, this));
        }
    }
}

