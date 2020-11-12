#pragma once
#include <iostream>

class Rectangle
{
public:
	Rectangle();
	Rectangle(double a, double b);
	Rectangle(std::istream& in);
	Rectangle(const Rectangle& quadrate_1);

	Rectangle& operator=(const Rectangle& right);
	friend std::ostream& operator<<(std::ostream& os, const Rectangle& obj);
	friend std::istream& operator>>(std::istream& is, Rectangle & obj);
	friend bool operator==(const Rectangle& obj_1, const Rectangle& obj);

	double Square();
	void Print();

	virtual ~Rectangle();
private:
	double side_a, side_b;
};