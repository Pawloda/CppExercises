// CountNoVowelsProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	std::cout << "Hello World!\n";
	char line[100];
	cout << "Enter words: \n";
	cin.getline(line, 100);

	int vowels = 0;
	int consonant = 0;
	int space = 0;

	for (int i = 0; line[i] != '\0'; i++)
	{
		if (line[i] == 'A' || line[i] == 'E' || line[i] == 'I' || line[i] == 'O' || line[i] == 'U' || line[i] == 'Y' || line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u' || line[i] == 'y')
			vowels++;
		else if (line[i] == (' '))
		{
			while (line[i] == ' ')
			{
				i++;
			}
			space++;
		}
		else if (line[i] >= 65 && line[i] <= 90 || line[i] >= 97 && line[i] <= 122)
			consonant++;
	}

	cout << "Vowels: " << vowels << endl;
	cout << "Consonants: " << consonant << endl;
	cout << "Words: " << space + 1 << endl;

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
