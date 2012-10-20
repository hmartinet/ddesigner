#ifndef NOSHIFTPROXYSTYLE_H
#define NOSHIFTPROXYSTYLE_H

#include <QProxyStyle>

class NoShiftProxyStyle : public QProxyStyle
{
public:
  int pixelMetric(PixelMetric metric, const QStyleOption *option = 0, const QWidget *widget = 0) {
    int ret = 0;
    switch (metric) {
      case QStyle::PM_ButtonShiftHorizontal:
      case QStyle::PM_ButtonShiftVertical:
        ret = 8;
        break;
      default:
        ret = 8;
        break;
      }
    return ret;
  }
};

#endif // NOSHIFTPROXYSTYLE_H
