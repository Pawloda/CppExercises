// PractiseStudentProjectExersice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Student
{
private:
	std::string name;
	int rollNum;
	int math;
	int phy;
	int chem;
public:
	Student(std::string n, int r, int m, int p, int c);
	Student(Student& s);
	void setName(std::string n) { name = n; }
	void setRollNum(int r) { rollNum = r; }
	void setMath(int m) { math = m; }
	void setPhy(int p) { phy = p; }
	void setChem(int c) { chem = c; }
	std::string getName() { return name; }
	int getRollNum() { return rollNum; }
	int getMath() { return math; }
	int getPhy() { return phy; }
	int getChem() { return chem; }
	int sum();
	int avarage();
	char mark();
	~Student();
};

Student::Student(std::string n = "None", int r = 0, int m = 0, int p = 0, int c = 0)
{
	setName(n);
	setRollNum(r);
	setMath(m);
	setPhy(p);
	setChem(c);
}
Student::Student(Student& s)
{
	name = s.name;
	rollNum = s.rollNum;
	math = s.math;
	phy = s.phy;
	chem = s.chem;
}

int Student::sum()
{
	return math + phy + chem;
}
int Student::avarage()
{
	return sum() / 3;
}
char Student::mark()
{
	if (avarage() > 4)
		return 'A';
	else if (avarage() <= 4 && avarage() > 3)
		return 'B';
	else if (avarage() <= 3 && avarage() > 2)
		return 'C';
	else
		return 'D';
}
Student::~Student()
{
	std::cout << "Student destroyed!";
}

void main()
{
	std::string n = "None";
	int r = 0; int m = 0; int p = 0; int c = 0;
	std::cout << "Enter your name: ";
	std::cin >> n;
	std::cout << "Enter your roll number: ";
	std::cin >> r;
	std::cout << "Enter your marks from math, physics and chemistry in order: \n";
	std::cin >> m >> p >> c;
	Student s(n, r, m, p, c);
	std::cout << s.mark() << std::endl;
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
