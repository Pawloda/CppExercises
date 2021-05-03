// PolymorphismPracticeStudentExercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Shape
{
public:
	virtual float area() = 0;
	virtual float perimeter() = 0;
};

class Rectangle :public Shape
{
private:
	float length;
	float breadth;
public:
	Rectangle(float l = 1, float b = 1);
	float area();
	float perimeter();
};
Rectangle::Rectangle(float l, float b)
{
	length = l;
	breadth = b;
}
float Rectangle::area()
{
	return length * breadth;
}
float Rectangle::perimeter()
{
	return 2 * (length + breadth);
}

class Circle :public Shape
{
private:
	float radius;
public:
	Circle(float r = 1);
	float area();
	float perimeter();
};
Circle::Circle(float r)
{
	radius = r;
}
float Circle::area()
{
	return 3.145 * radius * radius;
}
float Circle::perimeter()
{
	return 2 * 3.145 * radius;
}

int main()
{
	Shape* s = new Rectangle(10, 5);
	std::cout << "Area of Rectangle is: " << s->area() << std::endl;
	std::cout << "Perimeter of Rectangle is: " << s->perimeter() << std::endl;

	s = new Circle(5);
	std::cout << "Area of Circle is: " << s->area() << std::endl;
	std::cout << "Perimeter of Circle is: " << s->perimeter() << std::endl;
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
