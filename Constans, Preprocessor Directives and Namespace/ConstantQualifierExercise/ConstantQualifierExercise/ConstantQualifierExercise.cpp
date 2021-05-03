// ConstantQualifierExercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Demo
{
public:
	int r = 10;
	int t = 20;

	void Display() const
	{
		std::cout << r << " " << t << std::endl;
	}
};

void fun(const int& a, int& b)
{
	std::cout << a << " " << b << std::endl;
	b++;
}

int main()
{
	const int x = 10;
	int const y = 10;

	int z = 10; int a = 10;
	const int* ptr = &z;
	int const* ptp = &a;

	int b = 10; int c = 10;
	int* const ptt = &b;
	int const* const ptc = &c;

	int o = 10;
	int p = 20;

	fun(o, p);

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
