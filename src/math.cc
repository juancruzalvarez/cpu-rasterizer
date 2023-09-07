#include "math.h"

namespace math {
    

double Dot(const Vec3 &a, const Vec3 &b) {
    return a.x*b.x + a.y*b.y + a.z*b.z;
}

Vec3 CrossProduct(const Vec3 &a, const Vec3 &b) {
    return Vec3(a.y*b.z - a.z*b.y, b.x*a.z-a.x*b.z, a.x*b.y-a.y*b.x);
}



}