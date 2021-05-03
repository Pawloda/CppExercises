// InheritanceDemonstrationPracticeExercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Employee
{
private:
	int id;
	std::string name;
public:
	Employee(int i, std::string n)
	{
		id = i;
		name = n;
	}
	int getId() { return id; }
	std::string getName() { return name; }
};

class FullTime : public Employee
{
private:
	int salary;
public:
	FullTime(int i, std::string n, int s) :Employee(i, n)
	{
		salary = s;
	}
	int getSalary() { return salary; }
};

class PartTime : public Employee
{
private:
	int wage;
public:
	PartTime(int i, std::string n, int w) :Employee(i, n)
	{
		wage = w;
	}
	int getWage() { return wage; }
};

int main()
{
	PartTime p1(1, "John", 300);
	FullTime p2(2, "Raj", 5000);

	std::cout << "Salary of " << p2.getName() << " is " << p2.getSalary() << std::endl;
	std::cout << "Daily wage of " << p1.getName() << " is " << p1.getWage() << std::endl;
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
