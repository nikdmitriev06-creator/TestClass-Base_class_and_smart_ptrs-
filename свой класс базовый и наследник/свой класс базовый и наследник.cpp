#include <iostream>
#include "circle.h"
#include "rectangle.h"

int main()
{
    std::unique_ptr<circle> ptr1 = std::make_unique<circle>(10);

    circle a(11);
    std::shared_ptr<circle> ptr2 = std::make_shared<circle>(a);
    //std::cout << *ptr1 << "\n" << *ptr2;
    
    std::unique_ptr<rectangle> ptr3 = std::make_unique<rectangle>(10);

    std::shared_ptr<rectangle> ptr4 = std::move(ptr3);

    //std::cout << "\n" << *ptr4;

    int n = 5;
    std::unique_ptr<std::unique_ptr<shape>[]> shapeArr = std::make_unique<std::unique_ptr<shape>[]>(n);
    shapeArr[0] = std::move(ptr1);
    shapeArr[1] = std::make_unique<circle>(5.0);      
    shapeArr[2] = std::make_unique<rectangle>(4.0);
    shapeArr[3] = std::make_unique<circle>(3.0);
    std::cout << shapeArr[2]->area();





}
