#ifndef MESH_MAKER
#define MESH_MAKER

#include <vector>
#include <math.h>

struct Point {
    float x;
    float y;
    float z;
};

class SphereMaker{
public:
    void initSphere(float radius);

private:
    int vertexCount = 0;
    int sphereCount = 0;
    std::vector<float> arr;
    std::vector<unsigned int> idx;
};

class PlatformMaker{
public:
    void initPlatform(float radius);

private:
    int vertexCount = 0;
    std::vector<float> arr;
    std::vector<unsigned int> idx;
};

#endif