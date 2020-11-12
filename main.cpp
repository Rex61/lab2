#include <iostream>
#include "Rectangle.h"
#include "Array_Item.h"
#include "Array.h"

int main()
{
	Array arr;

	arr.push_back(Rectangle(2, 4));

	std::cout << arr;

	Rectangle r;

	r = arr.pop(); std::cout << r;
}