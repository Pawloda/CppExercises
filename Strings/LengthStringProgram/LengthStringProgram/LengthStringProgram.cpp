// LengthStringProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char* a = new char[50];

    cout << "Enter a string";
    cin.getline(a,50);
    cout << "Length " << strlen(a) << endl;
    

    char s1[20] = "Good";
    char s2[20] = "Morning";

    strcat_s(s1, s2);
    cout << s1<<endl;

    char s3[20] = "Good";
    char s4[20] = "Morning";

    strcpy_s(s3, s4);
    cout << s4<<s3;

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
