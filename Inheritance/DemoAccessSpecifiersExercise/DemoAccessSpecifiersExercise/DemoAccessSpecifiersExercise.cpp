// DemoAccessSpecifiersExercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Rectangle
{
private:
    int length;
    int breadth;
public:
    void setLength(int l)
    {
        if (l > 0)
            length = l;
        else
            length = 0;
    }
    void setBreadth(int b)
    {
        if (b > 0)
            breadth = b;
        else
            breadth = 0;
    }
    int getLength() { return length; }
    int getBreadth() { return breadth; }
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main()
{
    Rectangle r1;
    r1.setBreadth(5);
    r1.setLength(10);
    std::cout << r1.area();
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
