// SwitchProblemProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	std::cout << "Hello World!\n";

	cout << "Menu\n";
	cout << "1. Add\n" << "2. Sub\n" << "3. Mul\n" << "4.Div\n";

	int option;
	cout << "Enter your Choice";
	cin >> option;
	int a, b, c;
	cout << "Enter 2 number";
	cin >> a >> b;

	switch (option)
	{
	case 1: c = a + b;
		break;
	case 2: c = a - b;
		break;
	case 3: c = a * b;
		break;
	case 4: c = a / b;
		break;
	}

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
