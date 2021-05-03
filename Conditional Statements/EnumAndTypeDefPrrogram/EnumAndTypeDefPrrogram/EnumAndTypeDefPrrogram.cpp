// EnumAndTypeDefPrrogram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

enum day { mon = 1, tue, wed, thu, fri, sat, sun };
enum dept { cs = 1, it, ec, mech };

typedef int marks;

int main()
{
	std::cout << "Hello World!\n";

	day d;
	d = mon;

	dept dep = cs;

	cout << d << endl;

	marks n1, n2;
	n1 = 50;
	n2 = 90;

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
