// NatureOfQuadraticRootsProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	cout << "Hello World\n";
	float a, b, c, d, x1, x2;
	cout << "Enter 3 nos: a,b,c for ax^2+bx+c\n";
	cin >> a >> b >> c;
	d = (pow(b, 2) - 4 * a * c);
	if (d == 0)
		cout << (-b / (2 * a));
	else if (d > 0)
		cout << ((b - sqrt(d)) / (2 * a)) << " " << ((b + sqrt(d)) / (2 * a));
	else
		cout << "No roots";
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
