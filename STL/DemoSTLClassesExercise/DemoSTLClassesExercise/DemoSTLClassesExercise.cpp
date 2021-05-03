// DemoSTLClassesExercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <set>

int main()
{
	std::vector<int> v = { 2,4,6,8,10 };
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.pop_back();

	std::vector<int>::iterator itr;
	std::cout << "Using iterator." << std::endl;
	for (itr = v.begin(); itr != v.end(); itr++)
		std::cout << *itr << std::endl;
	std::cout << std::endl;

	std::list<int> l = { 21,14,61,81,101 };
	l.push_back(201);
	l.push_back(301);
	l.push_back(401);
	l.pop_back();

	std::list<int>::iterator ytr;
	std::cout << "Using iterator." << std::endl;
	for (ytr = l.begin(); ytr != l.end(); ytr++)
		std::cout << *ytr << std::endl;
	std::cout << std::endl;

	std::forward_list<int> f = { 21,14,61,81,101 };
	f.push_front(201);
	f.push_front(301);
	f.push_front(401);
	f.pop_front();

	std::forward_list<int>::iterator utr;
	std::cout << "Using iterator." << std::endl;
	for (utr = f.begin(); utr != f.end(); utr++)
		std::cout << *utr << std::endl;
	std::cout << std::endl;

	std::set<int> s = { 21,14,61,81,101 };
	s.insert(20);
	s.insert(30);

	std::set<int>::iterator etr;
	std::cout << "Using iterator." << std::endl;
	for (etr = s.begin(); etr != s.end(); etr++)
		std::cout << *etr << std::endl;
	std::cout << std::endl;
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
