// InsertionOperatorOverloadingExercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Complex
{
private:
	int real;
	int img;
public:
	Complex(int a = 0, int b = 0)
	{
		real = a;
		img = b;
	}
	friend std::ostream& operator<<(std::ostream& out, Complex& c1);
};

std::ostream& operator<<(std::ostream& out, Complex& c1)
{
	out << c1.real << "+i" << c1.img;
	return out;
}

void main()
{
	int x = 10;
	Complex c1(4, 5);
	std::cout << x << std::endl;
	std::cout << c1 << std::endl;
	operator<<(std::cout, c1);
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
