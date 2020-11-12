#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle() : Rectangle(0, 0) {
	std::cout << "Default rectangle created: " << 0 << ' ' << 0 << std::endl;
}

Rectangle::Rectangle(double a, double b)
{
	side_a = a;
	side_b = b;
	std::cout << "Rectangle created: " << side_a << ' ' << side_b << std::endl;
}

Rectangle::Rectangle(std::istream& in)
{
	std::cout << "Enter rectangle sides:\n";
	in >> side_a;
	in >> side_b;
}

Rectangle::Rectangle(const Rectangle& quadrate_1) {
	std::cout << "Rectangle copy created" << std::endl;
	side_a = quadrate_1.side_a;
	side_b = quadrate_1.side_b;
}

double Rectangle::Square()
{
	return (side_a * side_b);
}

void Rectangle::Print()
{
	std::cout << "Rectangle: a= " << side_a << "  b=" << side_b << std::endl;
}

Rectangle::~Rectangle()
{
	std::cout << "Rectangle deleted" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Rectangle& obj) {

	os << "a=" << obj.side_a << ", b=" << obj.side_b  << std::endl;
	return os;
}

std::istream& operator>>(std::istream& is, Rectangle& obj) {

	is >> obj.side_a;
	is >> obj.side_b;

	return is;
}

Rectangle& Rectangle::operator=(const Rectangle& right) {

	if (this == &right) return *this;

	std::cout << "Rectangle copied" << std::endl;
	side_a = right.side_a;
	side_b = right.side_b;

	return *this;
}

bool operator==(const Rectangle& obj_1, const Rectangle& obj)
{
	return ((obj_1.side_a == obj.side_a) && (obj_1.side_b == obj.side_b));
}
