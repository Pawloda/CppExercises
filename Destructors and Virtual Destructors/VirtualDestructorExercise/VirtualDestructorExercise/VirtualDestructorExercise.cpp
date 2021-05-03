// VirtualDestructorExercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Base1
{
public:
	Base1()
	{
		std::cout << "Base1 contructor" << std::endl;
	}
	~Base1()
	{
		std::cout << "Base1 destructor" << std::endl;
	}
};

class Derived1 : public Base1
{
public:
	Derived1()
	{
		std::cout << "Derived1 contructor" << std::endl;
	}
	~Derived1()
	{
		std::cout << "Derived1 destructor" << std::endl;
	}
};

class Base2
{
public:
	Base2()
	{
		std::cout << "Base2 contructor" << std::endl;
	}
	virtual ~Base2()
	{
		std::cout << "Base2 destructor" << std::endl;
	}
};

class Derived2 : public Base2
{
public:
	Derived2()
	{
		std::cout << "Derived2 contructor" << std::endl;
	}
	~Derived2()
	{
		std::cout << "Derived2 destructor" << std::endl;
	}
};

int main()
{
	Derived1 d;
	Base2* p = new Derived2;
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
