// TemplateFunctionsAndClassesExercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
template <class T>

class Stack
{
private:
	T* stk;
	int top;
	int size;
public:
	Stack(int sz)
	{
		size = sz;
		top = -1;
		stk = new T[size];
	}
	void push(T x);
	int pop();
};

template <class T>
void Stack<T>::push(T x)
{
	if (top == size - 1)
		std::cout << "Stack is full";
	else
	{
		top++;
		stk[top] = x;
	}
}

template <class T>
int Stack<T>::pop()
{
	T x = 0;
	if (top == -1)
		std::cout << "Stack is empty";
	else
	{
		x = stk[top];
		top--;
	}
	return x;
}

int main()
{
	Stack <int> s(10);
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.pop();
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
