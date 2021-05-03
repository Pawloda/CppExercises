// StaticMembersDemoExercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Innova
{
public:
    static int price;
    static int getPrice()
    {
        return price;
    }
};
int Innova::price = 20;

class Student
{
public:
    int roll;
    std::string name;
    static int addNo;
    Student(std::string n)
    {
        addNo++;
        roll = addNo;
        name = n;
    }
    void display()
    {
        std::cout << "Name " << name << std::endl << "Roll " << roll << std::endl;
    }
};
int Student::addNo = 0;

int main()
{
    Innova i1, i2, i3;
    std::cout << i1.price << std::endl;
    std::cout << i2.price << std::endl;
    std::cout << Innova::price << std::endl;

    Student s1("John");
    Student s2("Ravi");
    Student s3("Khan");
    s1.display();
    s3.display();
    std::cout << "Number Admission " << Student::addNo << std::endl;
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
