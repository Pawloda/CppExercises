// ConstructorsInInheritanceExercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Base
{
public:
	Base()
	{
		std::cout << "Default of Base" << std::endl;
	}
	Base(int l)
	{
		std::cout << "Param of Base" << std::endl;
	}
};
class Derived :public Base
{
public:
	Derived()
	{
		std::cout << "Default of Derived" << std::endl;
	}
	Derived(int a)
	{
		std::cout << "Param of Derived" << std::endl;
	}
	Derived(int a, int b) :Base(a)
	{
		std::cout << "Param of Derived" << std::endl;
	}
};
int main()
{
	Derived d;
	Derived c(10);
	Derived v(19, 18);
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
