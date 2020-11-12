#include "Array_Item.h"
#include <iostream>

Array_item::Array_item(const Rectangle& rect)
{

	this->rect = rect;
	this->next = nullptr;
	std::cout << "Stack item: created" << std::endl;

}

Array_item::Array_item(const Array_item& orig)
{
	this->rect = orig.rect;
	this->next = orig.next;
	std::cout << "Stack item: copied" << std::endl;
}

Array_item* Array_item::SetNext(Array_item* next)
{
	Array_item* old = this->next;
	this->next = next;
	return old;
}

Rectangle Array_item::GetRect() const
{
	return this->rect;
}

Array_item* Array_item::GetNext()
{
	return this->next;
}

Array_item::~Array_item()
{
	std::cout << "Stack item: deleted" << std::endl;
	delete next;
}

std::ostream& operator<<(std::ostream& os, const Array_item& obj)
{
	os << "[" << obj.rect << "]" << std::endl;
	return os;
}