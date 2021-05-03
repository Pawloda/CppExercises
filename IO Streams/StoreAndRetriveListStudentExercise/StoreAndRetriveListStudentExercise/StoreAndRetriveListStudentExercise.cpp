// StoreAndRetriveListStudentExercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include<fstream>

class Item
{
private:
	std::string name;
	float price;
	int qty;
public:
	Item() {}
	Item(std::string n, float p, int q) { name = n, price = p, qty = q; }
	friend std::ifstream& operator>>(std::ifstream& ifs, Item& i);
	friend std::ofstream& operator<<(std::ofstream& ofs, Item& i);
	friend std::ostream& operator<<(std::ostream& os, Item& i);
};

std::ofstream& operator<<(std::ofstream& ofs, Item& i)
{
	ofs << i.name << std::endl << i.price << std::endl << i.qty << std::endl;
	return ofs;
}
std::ifstream& operator>>(std::ifstream& ifs, Item& i)
{
	ifs >> i.name >> i.price >> i.qty;
	return ifs;
}
std::ostream& operator<<(std::ostream& os, Item& i)
{
	os << i.name << std::endl << i.price << std::endl << i.qty << std::endl;
	return os;
}

int main()
{
	std::string name;
	float price;
	int qty;
	Item* list[5];

	std::cout << "Enter all items:\n";
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Enter " << i + 1 << " Item's name, price and quantity:\n";
		std::cin >> name;
		std::cin >> price;
		std::cin >> qty;
		list[i] = new Item(name, price, qty);
	}

	std::ofstream ofs("Items.txt");
	for (int i = 0; i < 5; i++)
	{
		ofs << *list[i];
	}

	Item item;

	std::ifstream ifs("Items.txt");
	for (int i = 0; i < 5; i++)
	{
		ifs >> item;
		std::cout << "Item " << i << item << std::endl;
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
