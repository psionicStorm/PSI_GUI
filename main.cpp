/*
 * File:   main.cpp
 * Author: alex
 *
 * Created on August 20, 2016, 12:50 PM
 */

#include <QtGui/QWidget>
#include <QtUiTools/QtUiTools>

#include "ui_window.h"
#include "PSI_GUI_MainWindow.h"

int main(int argc, char *argv[]) {
    if (argc > 1)
        return EXIT_FAILURE;
    QApplication app(argc, argv);
    new PSI_MainWindow;
    return app.exec();
}


