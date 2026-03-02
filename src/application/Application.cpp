#include "application/Application.h"

int Application::run(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QMainWindow window;
    window.resize(800, 600);
    window.setWindowTitle("Enlil Simulator");
    window.show();

    return app.exec();
}