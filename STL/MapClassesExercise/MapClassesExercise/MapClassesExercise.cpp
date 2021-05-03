// MapClassesExercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>

int main()
{
    std::map <int, std::string> m;
    m.insert(std::pair<int, std::string>(1, "John"));
    m.insert(std::pair<int, std::string>(2, "Khan"));
    m.insert(std::pair<int, std::string>(3, "Ravi"));

    std::map<int, std::string>::iterator itr;
    for (itr = m.begin(); itr != m.end(); itr++)
    {
        std::cout << itr->first<<" "<<itr->second<<std::endl;
    }

    std::map<int, std::string>::iterator itr1;
    itr1 = m.find(2);
    std::cout << "Value found is: " << std::endl;
    std::cout << itr1->first << " " << itr1->second;;
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
