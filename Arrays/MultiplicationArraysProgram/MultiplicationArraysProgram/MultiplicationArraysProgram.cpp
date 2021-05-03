// MultiplicationArraysProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	std::cout << "Hello World!\n";

	int A[10][10], B[10][10], multi[10][10], r1, r2, c1, c2;

	std::cout << "Enter the number of rows and columns for first matrix:\n";
	std::cin >> r1 >> c1;
	std::cout << "\nEnter the number of rows and columns for second matrix:\n";
	do
	{
		std::cin >> r2 >> c2;
		if (c1 != r2)
			std::cout << "\nRows number of first matrix and column of second must be equal. Enter values for second matrix again:\n";
	} while (c1 != r2);

	std::cout << "\nEnter the values for first matrix:\n";
	for (int i = 0; i < r1; ++i)
	{
		for (int j = 0; j < c1; ++j)
		{
			std::cout << 'A' << "[" << i << "][" << j << "]" << " value:";
			std::cin >> A[i][j];
		}
	}

	std::cout << "\nEnter the values for second matrix:\n";
	for (int i = 0; i < r2; ++i)
	{
		for (int j = 0; j < c2; ++j)
		{
			std::cout << 'B' << "[" << i << "][" << j << "]" << " value:";
			std::cin >> B[i][j];
		}
	}

	for (int i = 0; i < r2; ++i)
	{
		for (int j = 0; j < c1; ++j)
		{
			multi[i][j] = 0;
		}
	}

	for (int i = 0; i < r1; ++i)
	{
		for (int j = 0; j < c2; ++j)
		{
			for (int k = 0; k < c1; ++k)
			{
				multi[i][j] += A[i][k] * B[k][j];
			}
		}
	}

	std::cout << "\nThe values for result:\n";
	for (int i = 0; i < r1; ++i)
	{
		for (int j = 0; j < c2; ++j)
		{
			std::cout << multi[i][j] << " ";
		}
		std::cout << "\n";
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
