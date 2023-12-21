#include "../includes/Misc.hpp"


Vec3::Vec3(float PositionX, float PositionY, float PositionZ, float yaw, float pitch, float roll) {
    PositionX = PositionX;
    PositionY = PositionY;
    PositionZ = PositionZ;
    yaw = yaw;
    pitch = pitch;
    roll = roll;
}

Vec2::Vec2(float X, float Y, float Rotation) {
    PositionX = X;
    PositionY = Y;
    Rotation = Rotation;
}