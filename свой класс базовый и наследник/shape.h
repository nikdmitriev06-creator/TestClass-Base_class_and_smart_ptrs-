#pragma once


class shape
{
public:
    virtual ~shape() = default; 
    virtual double area() const = 0;
    virtual double perimetr() const = 0;
};

