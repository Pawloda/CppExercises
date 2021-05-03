// ListOfItemsExercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <vector>

class Item
{
private:
	std::string name;
	int price;
	int quantity;
public:
	Item() {}
	Item(std::string n, int p, int q) { name = n, price = p, quantity = q; }
	friend std::ofstream& operator<<(std::ofstream& ofs, Item& i);
	friend std::ifstream& operator>>(std::ifstream& ifs, Item& i);
	friend std::ostream& operator<<(std::ostream& os, Item& i);
};

std::ofstream& operator<<(std::ofstream& ofs, Item& i)
{
	ofs << i.name << std::endl << i.price << std::endl << i.quantity << std::endl;
	return ofs;
}

std::ifstream& operator>>(std::ifstream& ifs, Item& i)
{
	ifs >> i.name >> i.price >> i.quantity;
	return ifs;
}

std::ostream& operator<<(std::ostream& os, Item& i)
{
	os << i.name << std::endl << i.price << std::endl << i.quantity << std::endl;
	return os;
}

int main()
{
	std::string name; int price; int quantity;
	int n;
	std::cout << "Enter number of items: \n";
	std::cin >> n;
	std::vector<Item> v;

	for (int i = 1; i <= n; i++)
	{
		std::cout << "Enter the name, proce and quantity of " << i << " product:\n";
		std::cin >> name;
		std::cin >> price;
		std::cin >> quantity;
		v.push_back(Item(name, price, quantity));
	}
	
	std::ofstream ofs("List.txt");
	std::vector<Item>::iterator itr1;
	for (itr1 = v.begin(); itr1 != v.end(); itr1++)
	{
		ofs << *itr1;
	}
	
	Item temp;
	std::ifstream ifs("List.txt");
	for (int i = 1; i <= n; i++)
	{
		ifs >> temp;
		std::cout << i << " " << temp;
	}
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
