#pragma once
#include "shape.h"
#include <cmath>
#include <iostream>

class rectangle :
    public shape
{
    double side = 0;

    friend std::ostream& operator <<(std::ostream& os, const rectangle& rectangle);

public:
    rectangle(double side);

    double area() const override;

        double perimetr() const override;

        double diagonal();
};

