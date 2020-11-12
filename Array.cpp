#include "Array.h"
#include <iostream>
Array::Array() : head(nullptr)
{
}

Array::Array(const Array& orig)
{
	head = orig.head;
}

std::ostream& operator<<(std::ostream& os, const Array& array)
{
	Array_item* item = array.head;
	while (item != nullptr)
	{
		os << *item;
		item = item->GetNext();
	}
	return os;
}

void Array::push_back(Rectangle&& rect)
{
	Array_item* other = new Array_item(rect);
	other->SetNext(head);
	head = other;
}

bool Array::empty()
{
	return head == nullptr;
}

Rectangle Array::pop()
{
	Rectangle result;
	if (head != nullptr)
	{
		Array_item* old_head = head;
		head = head->GetNext();
		result = old_head->GetRect();
		old_head->SetNext(nullptr);
		delete old_head;
	}
	return result;
}

Array::~Array()
{
	delete head;
}