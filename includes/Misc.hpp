#ifndef MISC_HPP
#define MISC_HPP


class Vec3 {
    public:
    float PositionX;
    float PositionY;
    float PositionZ;
    float RotationX;
    float RotationY;
    float RotationZ;
    void NormalizeVector();
    Vec3 XAxis();
    Vec3 YAxis();
    Vec3 ZAxis();
};

class Vec2 {
    public:
    Vec2(float X, float Y, float Rotation);
    float PositionX;
    float PositionY;
    float Rotation;
};

#endif