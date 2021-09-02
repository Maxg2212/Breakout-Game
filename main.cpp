#include <iostream>
#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QWidget window;
    window.resize(1280, 860);
    window.show();
    window.setWindowTitle(
            QApplication::translate("toplevel", "Breakout_Game"));
    return app.exec();
}



