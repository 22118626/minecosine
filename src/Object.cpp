#include "../includes/Object.hpp"

void Object::setPosition(Vec3 position) {
    objectVector = position;
}

void Object::setPosition(float X, float Y, float Z) {
    objectVector = Vec3(X, Y, Z, 0, 0, 0);
}

void Object::setPosition(float X, float Y, float Z, float yaw, float pitch, float roll) {
    objectVector = Vec3(X, Y, Z, yaw, pitch, roll);
}

Vec3 Object::GetVector() {
    return objectVector;
}