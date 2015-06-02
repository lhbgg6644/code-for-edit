#include <QDialog>
#include "about.h"

void showabout()
{
    QDialog vedit;
    vedit.setWindowTitle(QObject::tr("About vedit"));
    vedit.contentsRect();
    vedit.resize(300, 150);
    vedit.exec();
}
