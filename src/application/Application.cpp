#include "application/Application.h"
#include "graphics/Renderer.h"

int Application::run(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QMainWindow window;
    window.resize(800, 600);
    window.setWindowTitle("Enlil Simulator");

    Renderer* renderer = new Renderer();
    window.setCentralWidget(renderer);
    
    window.show();

    return app.exec();
}