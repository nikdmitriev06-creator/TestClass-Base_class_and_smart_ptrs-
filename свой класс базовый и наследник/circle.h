#pragma once
#include "shape.h"
#include <iostream>

#define PI 3.14

class circle :
    public shape
{
    double radius;
public:
    circle(double a);
    
    double area() const override;

    double perimetr() const override;

    double getRadius() const;

    friend std::ostream& operator <<(std::ostream& os, const circle& circle);
};
