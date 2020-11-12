#pragma once
#include "Rectangle.h"
#include "Array_Item.h"

class Array
{
public:
	Array();
	Array(const Array& orig);

	void push_back(Rectangle &&rect);
	bool empty();
	Rectangle pop();
	friend std::ostream& operator<<(std::ostream& os, const Array& arr);
	virtual ~Array();
public:
	Array_item *head;
};