#pragma once
#include "Rectangle.h"
class Array_item
{
public:
	Array_item(const Rectangle& rect);
	Array_item(const Array_item& orig);
	friend std::ostream& operator<<(std::ostream& os, const Array_item& obj);

	Array_item* SetNext(Array_item* next);
	Array_item* GetNext();
	Rectangle GetRect() const;

	virtual ~Array_item();
private:
	Rectangle rect;
	Array_item *next;
};