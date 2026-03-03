#ifndef RENDERER_H
#define RENDERER_H

#include <QOpenGLWidget>
#include <QOpenGLFunctions>

class Renderer : public QOpenGLWidget, protected QOpenGLFunctions
{
public:
    explicit Renderer(QWidget *parent = nullptr) : QOpenGLWidget(parent) {};

protected:
    void initializeGL() override;
    void resizeGL(int w, int h) override;
    void paintGL() override;
};

#endif 