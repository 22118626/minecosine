#ifndef MISC_HPP
#define MISC_HPP


class Vertex {
    public:
    Vertex();
    float X;
    float Y;
    float Z;
};

class Vec3 : public Vertex{
    public:
    Vec3(float PositionX, float PositionY, float PositionZ, float yaw, float pitch, float roll);
    float yaw;
    float pitch;
    float roll;
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