// FindUserNameFormEmailProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	std::cout << "Hello World!\n";

	std::cout << "Enter E-mail adress: \n";
	std::string email;
	std::cin >> email;
	int k = 0;
	int i = 0;

	for (int j = 0; j <= email.length(); j++)
	{
		i = email.find('@');

		if (((email[j] >= 65 && email[j] <= 90) || (email[j] >= 97 && email[j] <= 122) || email[j] == '.' || email[j] == '_' || email[j] == '@' || email[j] == '\0') && i > 0)
		{
			k = 1;
		}

		else
		{
			std::cout << "Enter E-mail adress again - only letters, dots and floors: \n";
			std::cin >> email;
			j = 0;
		}
	}
	std::string uname = email.substr(0, i);

	if (k!=0)
		std::cout << uname;

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
