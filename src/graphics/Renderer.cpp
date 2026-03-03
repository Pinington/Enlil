#include "graphics/Renderer.h"

void Renderer::initializeGL()
{
    initializeOpenGLFunctions();
    glClearColor(0.1f, 0.2f, 0.3f, 1.0f);
}

void Renderer::resizeGL(int w, int h)
{
    glViewport(0, 0, w, h);
}

void Renderer::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT);
}