// OperatorOverloadingExercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Complex
{
public:
	int real;
	int img;
	Complex(int r = 0, int i = 0)
	{
		real = r;
		img = i;
	}
	Complex operator+(Complex x)
	{
		Complex temp;
		temp.real = real + x.real;
		temp.img = img + x.img;
		return temp;
	}
};

int main()
{
	Complex c1(3, 7);
	Complex c2(4, 8);
	Complex c3;

	c3 = c1 + c2;
	std::cout << c3.real <<"+i"<< c3.img;
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
