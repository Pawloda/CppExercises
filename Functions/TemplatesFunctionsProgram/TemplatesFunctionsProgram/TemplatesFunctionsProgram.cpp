// TemplatesFunctionsProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

template <class T>

T max(T x, T y)
{
    if (x > y)
        return x;
    else
        return y;
}

int main()
{
    std::cout << "Hello World!\n";

    int c = max(10, 5);
    float d = max(3.4, 5.7);

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
