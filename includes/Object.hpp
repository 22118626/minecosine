#ifndef OBJECT_HPP
#define OBJECT_HPP

#include "./Misc.hpp"

class Object {
    public:
    void setPosition(float x, float y, float z);
    void setPosition(float x, float y, float z, float yaw, float pitch, float roll);
    void setPosition(Vec3 position);
    void translate(float x, float y, float z);
    void rotateDeg(float yaw, float pitch, float roll);
    Vec3 GetVector();

    private:
    Vertex points[32]
    Vec3 objectVector;
};

#endif