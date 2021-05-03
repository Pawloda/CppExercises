// DataHidingProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class Rectangle
{
private:
	int length;
	int breadth;
public:
	void setLength(int l)
	{
		if (l >= 0)
			length = l;
		else
			length = 0;
	}

	void setBreadth(int b)
	{
		breadth = b;
	}

	int getLength(int l)
	{
		return length;
	}

	int getBreadth(int b)
	{
		return breadth;
	}
};

void main()
{
	std::cout << "Hello World!\n";

	Rectangle r;
	r.setLength(10);
	r.setBreadth(5);
	cout << r.getLength(0);
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
