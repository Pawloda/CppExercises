// ScopeResolutionProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Rectangle
{
private:
	int length;
	int breadth;
public:
	Rectangle();
	Rectangle(int l, int b);
	Rectangle(Rectangle& r);
	int getLength() { return length; }
	int getBreadth() { return breadth; }
	void setLength(int l);
	void setBreadth(int b);
	int area();
	int perimeter();
	bool isSquare();
	~Rectangle();
};

Rectangle::Rectangle()
{
	length = 1;
	breadth = 1;
}
Rectangle::Rectangle(int l, int b)
{
	length = l;
	breadth = b;
}
Rectangle::Rectangle(Rectangle& r)
{
	length = r.length;
	breadth = r.breadth;
}
void Rectangle::setLength(int l)
{
	length = l;
}
void Rectangle::setBreadth(int l)
{
	breadth = l;
}
int Rectangle::area()
{
	return length * breadth;
}
int Rectangle::perimeter()
{
	return 2 * (length + breadth);
}
bool Rectangle::isSquare()
{
	return length == breadth;
}
Rectangle::~Rectangle()
{
	cout << "Rectangle Destroyed";
}

int main()
{
	std::cout << "Hello World!\n";
	Rectangle r1(10, 10);
	cout << "Area of rectangle is: " << r1.area() << endl;
	if (r1.isSquare())
		cout << "Yes" << endl;
	else
		cout << "no" << endl;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
