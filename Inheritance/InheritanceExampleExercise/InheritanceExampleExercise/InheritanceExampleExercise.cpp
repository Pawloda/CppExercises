// InheritanceExampleExercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Rectangle
{
private:
	int length;
	int breadth;
public:
	Rectangle(int l = 0, int b = 0)
	{
		setLength(l);
		setBreadth(b);
	}
	void setLength(int l) { length = l; }
	void setBreadth(int b) { breadth = b; }
	int getLength() { return length; }
	int getBreadth() { return breadth; }
	int perimeter() { return (2 * (length + breadth)); }
	int area() { return (length * breadth); }
};

class Cuboid :public Rectangle
{
private:
	int height;
public:
	Cuboid(int l = 0, int b = 0, int h = 0)
	{
		setLength(l);
		setBreadth(b);
		height = h;
	}
	void setHeight(int h) { height = h; }
	int getHeight() { return height; }
	int volume() { return area() * height; }
};

void main()
{
	Cuboid c(5, 10, 15);
	std::cout << c.getLength() << std::endl;
	std::cout << c.volume() << std::endl;
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
