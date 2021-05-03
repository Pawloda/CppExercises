// PreprocessorsDirectivesMacrosExercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define PI 3.1425
#define c std::cout
#define SGR(x) (x*x)
#define MSG(y) #y
#ifndef pI
#define pI 3
#endif
#define max(a,b) (a>b?a:b)

int main()
{
	std::cout << PI << std::endl;
	c << PI;
	c << SGR(6);
	c << MSG(Hello);
	c << max(1, 2);
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
