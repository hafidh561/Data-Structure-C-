#include <iostream>
#include <cstdlib>
#include <string>

#include "hash.h"

hash::hash()
{
	for (int i = 0; i < tableSize; i++)
	{
		HashTable[i] = new item;
		HashTable[i]->name = "empty";
		HashTable[i]->drink = "empty";
		HashTable[i]->next = NULL;
	}
}

void hash::AddItem(std::string name, std::string drink)
{
	int index = Hash(name);

	if (HashTable[index]->name == "empty")
	{
		HashTable[index]->name = name;
		HashTable[index]->drink = drink;
	}
	else
	{
		item* Ptr = HashTable[index];
		item* n = new item;
		n->name = name;
		n->drink = drink;
		n->next = NULL;
		while (Ptr->next != NULL)
		{
			Ptr = Ptr->next;
		}
		Ptr->next = n;
	}
}

void hash::PrintTable()
{
	int number;
	for (int i = 0; i < tableSize; i++)
	{
		number = NumberOfItemsInIndex(i);
		std::cout << "-----------------\n";
		std::cout << "index = " << i << std::endl;
		std::cout << HashTable[i]->name << std::endl;
		std::cout << HashTable[i]->drink << std::endl;
		std::cout << "# of items = " << number << std::endl;
		std::cout << "-----------------\n\n";
	}
}

int hash::NumberOfItemsInIndex(int index)
{
	int count = 0;

	if (HashTable[index]->name == "empty")
	{
		return count;
	}
	else
	{
		count++;
		item* Ptr = HashTable[index];
		while (Ptr->next != NULL)
		{
			count++;
			Ptr = Ptr->next;
		}
	}
	return count;
}

void hash::PrintItemsInIndex(int index)
{
	item* Ptr = HashTable[index];

	if (Ptr->name == "empty")
	{
		std::cout << "index = " << index << " is empty";
	}
	else
	{
		std::cout << "index " << index << " contains the following item\n";

		while (Ptr != NULL)
		{
			std::cout << "-----------------\n";
			std::cout << Ptr->name << std::endl;
			std::cout << Ptr->drink << std::endl;
			std::cout << "-----------------\n";
			Ptr = Ptr->next;
		}
	}
}

int hash::Hash(std::string key)
{
	int hash = 0;
	int index;

	for (int i = 0; i < key.length(); i++)
	{
		hash = (hash + (int) key[i]) * 17;
	}

	index = hash % tableSize;

	return index;
}

void hash::FindDrink(std::string name)
{
	int index = Hash(name);
	bool foundName = false;
	std::string drink;

	item* Ptr = HashTable[index];
	while (Ptr != NULL)
	{
		if (Ptr->name == name)
		{
			foundName = true;
			drink = Ptr->drink;
		}
		Ptr = Ptr->next;
	}
	if (foundName == true)
	{
		std::cout << "Favorite drink = " << drink << std::endl;
		std::cout << "index = " << index;
	}
	else
	{
		std::cout << name << "'s info was not found in the Hash Table\n";
	}
}

void hash::RemoveItem(std::string name)
{
	int index = Hash(name);

	item* delPtr;
	item* P1;
	item* P2;

	// Case 0 - bucket is empty
	if (HashTable[index]->name == "empty" && HashTable[index]->drink == "empty")
	{
		std::cout << name << " was not found in the Hash Table\n";
	}

	// Case 1 - only 1 item contained in bucket and that item has matching name
	else if (HashTable[index]->name == name && HashTable[index]->next == NULL)
	{
		HashTable[index]->name = "empty";
		HashTable[index]->drink = "empty";
		std::cout << name << " was removed from the Hash Table\n";
	}

	// Case 2 - match is located in the first item in the bucket but there are more items in the bucket
	else if (HashTable[index]->name == name)
	{
		delPtr = HashTable[index];
		HashTable[index] = HashTable[index]->next;
		delete delPtr;
		std::cout << name << " was removed from the Hash Table\n";
	}

	// Case 3 - bucket contains items but first item is not a match
	else
	{
		P1 = HashTable[index]->next;
		P2 = HashTable[index];

		while (P1 != NULL && P1->name != name)
		{
			P2 = P1;
			P1 = P1->next;
		}

		// Case 3.1 - no match
		if (P1 == NULL)
		{
			std::cout << name << " was not found in the Hash Table\n";
		}

		// Case 3.2 - match is found
		else
		{
			delPtr = P1;
			P1 = P1->next;
			P2->next = P1;

			delete delPtr;
			std::cout << name << " was removed from the Hash Table\n";
		}
	}
}

void hash::mainProgram()
{
	hash Hashy;
	std::string searchName;
	std::string searchDrink;
	int no;

	// Sample Data
	Hashy.AddItem("Paul", "Locha");
	Hashy.AddItem("Kim", "Iced Mocha");
	Hashy.AddItem("Emma", "Strawberry Smoothie");
	Hashy.AddItem("Annie", "Hot Chocolate");
	Hashy.AddItem("Sarah", "Passion Tea");
	Hashy.AddItem("Pepper", "Caramel Mocha");
	Hashy.AddItem("Mike", "Chai Tea");
	Hashy.AddItem("Steve", "Apple Cider");
	Hashy.AddItem("Bill", "Root Beer");
	Hashy.AddItem("Marie", "Skinny Latte");
	Hashy.AddItem("Susan", "Water");
	Hashy.AddItem("Joe", "Green Tea");

	while (true)
	{
		std::cout << "Hash Table Option\n1. Show Hash Table\n2. Show Items Index\n3. Search Item\n4. Add Item\n5. Remove Item\n6. Exit\n\nChoose: ";
		std::cin >> no;
		if (no == 1)
		{
			system("cls");
			Hashy.PrintTable();
		}
		else if (no == 2)
		{
			system("cls");
			Hashy.PrintTable();
			std::cout << "\nIndex: ";
			std::cin >> no;
			system("cls");
			Hashy.PrintItemsInIndex(no);
		}
		else if (no == 3)
		{
			system("cls");
			std::cout << "Input Name: ";
			std::cin >> searchName;
			Hashy.FindDrink(searchName);
		}
		else if (no == 4)
		{
			system("cls");
			std::cout << "Input Name: ";
			std::cin >> searchName;
			std::cout << "Input Drink: ";
			std::cin >> searchDrink;
			Hashy.AddItem(searchName, searchDrink);
		}
		else if (no == 5)
		{
			system("cls");
			std::cout << "Input Name: ";
			std::cin >> searchName;
			Hashy.RemoveItem(searchName);
		}
		else
		{
			system("cls");
			Hashy.PrintTable();
			std::cout << "\n";
			system("pause");
			system("cls");
			break;
		}
		std::cout << "\n";
		system("pause");
		system("cls");
	}
}