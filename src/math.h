#ifndef MATH_H
#define MATH_H

namespace math{


// Structure that represents a three dimentional vector.
struct Vec3{
    // Constructor with no value, intializes all components to zero.
    Vec3(): x(0), y(0), z(0) {} 
    // Constructor with one value, intializes all componets to that value.
    Vec3(double v): x(v), y(v), z(v) {} 
    // Constructor with three values, intializes all componets to their respective value.
    Vec3(double x_, double y_, double z_): x(x_), y(y_), z(z_) {}

    Vec3 operator+(const Vec3 &rhs) const {
        return Vec3(x+rhs.x, y+rhs.y, z+rhs.z);
    }

    Vec3 operator-(const Vec3 &rhs) const {
        return Vec3(x-rhs.x, y-rhs.y, z-rhs.z);
    }

    Vec3 operator*(const double &c) const {
        return Vec3(x*c, y*c, z*c);
    }

    Vec3 operator/(const double &c) const {
        return Vec3(x/c, y/c, z/c);
    }

    double x, y, z;
};

//Structure that represents a triangle, given the three points that make it.
struct Triangle{
    Vec3 p1, p2, p3;
};

double Dot(const Vec3 &a, const Vec3 &b);
Vec3 CrossProduct(const Vec3 &a, const Vec3 &b);





}


#endif