// OverloadingFunctionsProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

float add(float a, float b)
{
	return b + a;
}

int add(int a, int b)
{
	return b + a;
}

int add(int a, int b, int c)
{
	return b + a + c;
}

int main()
{
	std::cout << "Hello World!\n";

	int a = 10, b = 5, c, d;
	float j = 10.3f, k = 5.1f, l;

	c = add(b, a);
	d = add(c, b, a);
	l = add(k, j);

	std::cout << c << std::endl << d << std::endl << l;

	return 0;
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
