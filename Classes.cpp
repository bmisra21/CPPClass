// Classes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <cstring>
#include <string>

using namespace std;

char display_selection();
int attack(int, int);

class Player 
{
	int xp{};
	int health{100};
	int money{100};
	
public:
	void changeXp(int);
	void changeHealth(int);
	void changeMoney(int);
};



int main()
{
	Player player1;
	
	char user_selection = display_selection();

	while (user_selection == 'a' or user_selection == 'b')
	{
		char user_selection = display_selection();

		if (user_selection == 'a')
		{
			cout << "a" << endl;
		}
		else if (user_selection == 'b') 
		{
			cout << "b" << endl;
		} 
		else { cout << "Bye!" << endl; }
	} 

	return 0;
}

char display_selection()
{
	vector<string> display_menu{ "Attack Enemy", "Buy", "Exit" };

	cout << "=======================================" << endl;
	for (size_t i{}; i <= 2; ++i)
	{
		cout << display_menu.at(i) << endl;
	}
	cout << "=======================================" << endl;

	cout << "What will you do?" << endl;
	string user_selection{};
	getline(cin, user_selection);


	if (user_selection == "Attack Enemy")
	{
		return 'a';
	}
	else if (user_selection == "Buy")
	{
		return 'b';
	}
	else
	{
		return 'x';
		cout << "x" << endl;
	}
}
