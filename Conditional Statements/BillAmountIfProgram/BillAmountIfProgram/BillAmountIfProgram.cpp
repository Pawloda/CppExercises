// BillAmountIfProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	std::cout << "Hello World!\n";

	float billAmount;
	float discount = 0.0;

	std::cout << "Enter bill amount";
	std::cin >> billAmount;

	if (billAmount >= 500)
		discount = billAmount * 20 / 100;
	else if (billAmount >= 100 && billAmount < 500)
		discount = billAmount * 10 / 100;

	std::cout << "Bill Amount is: " << billAmount << "\n";
	std::cout << "Discount is: " << discount << "\n";
	std::cout << "Discount Amount is: " << billAmount - discount << "\n";

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
