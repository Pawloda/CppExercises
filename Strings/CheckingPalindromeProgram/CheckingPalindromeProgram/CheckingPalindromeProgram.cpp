// CheckingPalindromeProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	std::cout << "Hello World!\n";
	cout << "Enter a word: \n";
	string str;
	cin >> str;
	string rev;
	int k = 0;

	int len = str.length();
	rev.resize(len);

	for (int i = 0, j = len - 1; i < len; i++, j--)
	{
		rev[i] = str[j];
	}
	rev[len] = '\0';

	for (int i = 0, j = 0; i < len; i++, j++)
	{
		if ((str[i] == rev[j]) || (str[i] == rev[j] + 32) || (str[i] == rev[j] - 32))
		{
			k = 0;
		}
		else
		{
			k = 1;
			break;
		}
	}

	if (k == 0)
		cout << "Palindrome" << endl;
	else
		cout << "Not palindorme" << endl;

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
