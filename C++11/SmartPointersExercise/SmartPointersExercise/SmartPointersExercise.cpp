// SmartPointersExercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Rectangle
{
    int length;
    int breadth;
public:
    Rectangle(int l, int b) { length = l, breadth = b; }
    int area() { return length * breadth; }
};

int main()
{
    std::unique_ptr<Rectangle> ptr(new Rectangle(10, 5));
    std::cout << ptr->area() << std::endl;

    std::unique_ptr<Rectangle> ptr2;
    ptr2 = move(ptr);
    std::cout << ptr2->area() << std::endl;

    std::shared_ptr<Rectangle> ptr3(new Rectangle(10, 6));
    std::cout << ptr3->area() << std::endl;

    std::shared_ptr<Rectangle> ptr4;
    ptr4 = ptr3;
    std::cout << ptr4->area() << std::endl;
    std::cout << ptr4.use_count() << std::endl;


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
