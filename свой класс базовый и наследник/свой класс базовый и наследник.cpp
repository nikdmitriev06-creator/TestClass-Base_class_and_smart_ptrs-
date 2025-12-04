#include <iostream>
#include "circle.h"
#include "rectangle.h"
#include <vector>

int main()
{
	std::unique_ptr<circle> ptr1 = std::make_unique<circle>(10);
	std::unique_ptr<circle> ptr2 = std::make_unique<circle>(10);
	std::unique_ptr<rectangle> ptr3 = std::make_unique<rectangle>(10);
	std::unique_ptr<rectangle> ptr4 = std::make_unique<rectangle>(10);

	std::vector<std::unique_ptr<shape>> shapeArr;
	shapeArr.push_back(std::move(ptr1));
	shapeArr.push_back(std::move(ptr2));
	shapeArr.push_back(std::move(ptr3));
	shapeArr.push_back(std::move(ptr4));
	std::cout << shapeArr[2]->area();





}
