// ReadingStringsProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	std::cout << "Hello World!\n";

	char s[20];

	cout << "Enter your name ";
	cin >> s;


	char r[50];
	char o[50];

	cout << "Enter your name ";
	cin.get(r, 50);
	cin.getline(o, 50);
	cin >> r;
	cin >> o;

	char v[100];
	cin.ignore();
	char v2[100];

	cout << "Enter your name ";
	cin.get(v, 100);
	cout << "Welcome "<<v<<endl;

	cin.ignore();

	cout << "Enter your name ";
	cin.get(v2, 100);
	cout << "Welcome " << v2 << endl;

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
