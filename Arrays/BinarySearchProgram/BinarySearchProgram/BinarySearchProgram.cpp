// BinarySearchProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	std::cout << "Hello World!\n";
	int A[10] = { 6,8,13,17,20,22,25,28,30,35 };
	int key, mid, l = 0, h = 9;
	std::cout << "Enter a key: \n";
	std::cin >> key;

	while (l <= h)
	{
		mid = (l + h) / 2;
		if (key == A[mid])
		{
			std::cout << "found at: " << mid;
			return 0;
		}
		else if (key < A[mid])
			h = mid - l;
		else
			l = mid + l;
	}
	std::cout << "Not found";
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
