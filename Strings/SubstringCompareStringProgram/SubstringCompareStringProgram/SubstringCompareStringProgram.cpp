// SubstringCompareStringProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>

int main()
{
    std::cout << "Hello World!\n";

    char s1[20] = "Programing";
    char s2[20] = "gram";

    if (strstr(s1, s2) != 0)
        std::cout << strstr(s1, s2) << std::endl;
    else
        std::cout << "not found";



    char s3[20] = "Programing";

    if (strchr(s3, 'a') != 0)
        std::cout << strchr(s3, 'a') << std::endl;
    else
        std::cout << "not found";
    if (strrchr(s3, 'a') != 0)
        std::cout << strrchr(s3, 'a') << std::endl;
    else
        std::cout << "not found";


    char s4[20] = "Programing";
    char s5[20] = "gram";

    std::cout << strcmp(s4, s5) << std::endl;

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
