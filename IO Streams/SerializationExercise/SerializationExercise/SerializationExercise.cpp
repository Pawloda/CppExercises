// SerializationExercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

class Student
{
public:
	std::string name;
	int roll;
	std::string branch;
	friend std::ofstream& operator<<(std::ofstream& ofs, Student& s);
	friend std::ifstream& operator>>(std::ifstream& ifs, Student& s);
};

std::ifstream& operator>>(std::ifstream& ifs, Student& s)
{
	ifs >> s.name >> s.roll >> s.branch;
	return ifs;
}

std::ofstream& operator<<(std::ofstream& ofs, Student& s)
{
	ofs << s.name << std::endl;
	ofs << s.roll << std::endl;
	ofs << s.branch << std::endl;
	return ofs;
}

int main()
{
	Student s1;
	s1.name = "John"; s1.roll = 10; s1.branch = "CS";
	std::ofstream ofs("Student.txt", std::ios::trunc);
	ofs << s1;
	ofs.close();

	std::ifstream ifs("Student.txt");
	ifs >> s1;

	std::cout << "Name " << s1.name << std::endl;
	std::cout << "Roll " << s1.roll << std::endl;
	std::cout << "Branch " << s1.branch << std::endl;
	ifs.close();

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
