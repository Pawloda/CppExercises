// UsingSTLClassesExercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <list>

int main()
{
	std::vector<int> v = { 10,20,30,40 };
	v.push_back(25);
	v.push_back(70);
	v.pop_back();

	for (int x : v)
		std::cout << x << std::endl;

	std::cout << "\n\n";

	std::vector<int>::iterator itr;
	for (itr = v.begin(); itr != v.end(); itr++)
	{
		std::cout << *itr << std::endl;
	}

	std::cout << "\n\n";

	std::list<int> l = { 10,20,30,40 };
	l.push_back(25);
	l.push_back(70);
	l.pop_back();

	for (int x : l)
		std::cout << x << std::endl;

	std::cout << "\n\n";

	std::list<int>::iterator ytr;
	for (ytr = l.begin(); ytr != l.end(); ytr++)
	{
		std::cout << *ytr << std::endl;
	}
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
