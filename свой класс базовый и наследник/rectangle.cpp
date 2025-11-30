#include "rectangle.h"



    rectangle::rectangle(double side) : side(side) {};

    double rectangle::area() const
    {
        return(side * side);
    }

    double rectangle::perimetr() const
    {
        return(side * 4);
    }

    double rectangle::diagonal()
    {
        return(side * sqrt(2));
    }

std::ostream& operator<<(std::ostream& os, const rectangle& rectangle) {
	os << "rectangle side: " << rectangle.side << " area: " << rectangle.area();
	return os;
}
