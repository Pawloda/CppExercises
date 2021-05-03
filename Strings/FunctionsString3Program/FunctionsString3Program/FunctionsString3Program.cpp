// FunctionsString3Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	std::cout << "Hello World!\n";

	string u = "Hello";
	string t = "World";

	char str[10];

	u.copy(str, 3);
	str[3] = '\0';
	cout << str << endl;

	cout << "\n";

	cout << u.find("ll") << endl;
	cout << u.find('e') << endl;
	cout << u.rfind('e') << endl;

	cout << "\n";

	cout << u.find_first_of('l') << endl;
	cout << u.find_last_of('l') << endl;
	cout << u.find_first_of('l',3) << endl;
	cout << u.find_first_of("lo") << endl;

	cout << "\n";

	cout << u.substr(3) << endl;
	cout << u.substr(3,1) << endl;

	string w = "Hello";

	cout << u.compare(t) << endl;
	cout << u.compare(w) << endl;

	cout << "\n";

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
