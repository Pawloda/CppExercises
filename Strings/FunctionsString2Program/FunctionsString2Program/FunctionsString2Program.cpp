// FunctionsString2Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Hello World!\n";

	string s1 = "Hello";

	s1.append(" World!\n");

	cout << s1;

	s1.insert(3, "lllll");

	cout << s1;

	s1.replace(4, 3, "o");

	cout << s1;

	s1.erase(4, 3);

	cout << s1;

	s1.push_back('H');

	cout << s1;

	s1.pop_back();

	cout << s1;

	string s2 = "Bye guys!";

	s1.swap(s2);

	cout << s1 << endl;
	cout << s2;

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
