#ifndef RENDERER_H
#define RENDERER_H

#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include <QWidget>
#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include <QOpenGLContext>
#include <QOpenGLShaderProgram>
#include <QOpenGLBuffer>
#include <QOpenGLVertexArrayObject>
#include <QMatrix4x4>

class Renderer : public QOpenGLWidget, protected QOpenGLFunctions
{
public:
    explicit Renderer(QWidget *parent = nullptr) : QOpenGLWidget(parent) {};

protected:
    void initializeGL() override;
    void resizeGL(int w, int h) override;
    void paintGL() override;
    GLuint m_posAttr;
    GLuint m_colAttr;
    GLuint m_matrixUniform;
    QOpenGLShaderProgram *m_program;
};

#endif 