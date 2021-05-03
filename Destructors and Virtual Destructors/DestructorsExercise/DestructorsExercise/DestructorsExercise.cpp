// DestructorsExercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Test1
{
public:
	Test1()
	{
		std::cout << "Test1 created" << std::endl;
	}
	~Test1()
	{
		std::cout << "Test1 destroyed" << std::endl;
	}
};

class Test2
{
public:
	Test2()
	{
		std::cout << "Test2 created" << std::endl;
	}
	~Test2()
	{
		std::cout << "Test2 destroyed" << std::endl;
	}
};

int main()
{
	Test1 a;
	Test2* p = new Test2;
	delete p;
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
