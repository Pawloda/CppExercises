// DestructorsDemoExercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Demo
{
	int* p;
public:
	Demo()
	{
		p = new int[10];
		std::cout << "Constructor of Demo" << std::endl;
	}
	~Demo()
	{
		delete[]p;
		std::cout << "Destructor of Demo" << std::endl;
	}
};
void fun()
{
	Demo* p = new Demo();
	delete p;
}

int main()
{
	fun();
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
