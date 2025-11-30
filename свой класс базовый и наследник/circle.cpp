#include "circle.h"

#define PI 3.14


circle::circle(double a) : radius(a) {}

    double circle::area() const
    {
        double area = radius * radius * PI;
        return(area);
    }

    double circle::perimetr() const
    {
        return(2 * PI * radius);
    }

    double circle::getRadius() const { return radius; }

std::ostream& operator<<(std::ostream& os, const circle& circle)
{
    os << "circle radius: " << circle.radius << " area: " << circle.area();
    return os;
}
