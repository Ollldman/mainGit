#include <cmath>
using namespace std;

class Cylinder
{
private:
    double height;
    double radius;
    const double pi = 3.141592654;
public:
    Cylinder(double height, double radius);

    double FullSurfaceArea (double height, double radius) {
        return ( 2*pi*radius*height+2*pi*pow(radius,2));
    }

};
