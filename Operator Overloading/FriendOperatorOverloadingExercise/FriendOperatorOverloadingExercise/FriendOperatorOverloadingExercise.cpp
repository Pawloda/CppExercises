// FriendOperatorOverloadingExercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Complex
{
public:
	int real;
	int img;

	Complex(int a, int b);
	friend Complex operator+(Complex c1, Complex c2);
	void display();
};

Complex::Complex(int a = 0, int b = 0)
{
	real = a;
	img = b;
}
Complex operator+(Complex c1, Complex c2)
{
	Complex temp;
	temp.real = c1.real + c2.real;
	temp.img = c1.img + c2.img;
	return temp;
}
void Complex::display()
{
	std::cout << real << "+i" << img;
}

int main()
{
	Complex c1(5, 4);
	Complex c2(3, 3);
	Complex c3;
	c3 = c1 + c2;
	c3.display();
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
