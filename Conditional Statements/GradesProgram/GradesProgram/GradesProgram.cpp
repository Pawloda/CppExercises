// GradesProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	std::cout << "Hello World!\n";

	int m1, m2, m3, total;
	float Avg;

	std::cout << "Enter marks of 3 subjects\n";
	std::cin >> m1 >> m2 >> m3;
	total = m1 + m2 + m3;
	Avg = total / 3.0;

	if (Avg >= 60)
		std::cout << "A";
	else if (Avg < 60 && Avg >= 35)
		std::cout << "B";
	else
		std::cout << "C";

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
