#include "pch.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Object
{
public:
	string name;
};

class Game_Process;

class Racer
{
public:
	string name;
	friend void Game_Process::getplayerinfo(Racer &racer);
};

class Game_Process
{
public:
	string name;
	string Sex;
	string name1;
	string Sex1;
	string name2;
	string Sex2;
	void getplayerinfo()
	{
		name = "Vasya";
		Sex = "Man";
		name1 = "Petya";
		Sex1 = "Woman";
		name2 = "Alon";
		Sex2 = "Man";
	};
};
	string Sex;
	void getplayerinfo(Racer &racer)
	{
		cout << "Введите Ваше имя" << endl;
		getline(cin, racer.name);

	};
};

class Car : public Object
{
public:
	int POWER;
	Car()
	{
		POWER = 0;
		name = "";
	};
	Car(int p, string n) : Car()
	{
		POWER = p;
		name = n;
	};
	Car(Car &CopyingCar)
	{
		name = CopyingCar.name;
		POWER = CopyingCar.POWER;
	};
	int get_POWER()
	{
		return POWER;
	};
	string get_name()
	{
		return name;
	};
	void set_POWER(int pow)
	{
		POWER = pow;
	};
	void set_name(string n)
	{
		name = n;
	};
};



int main()
{
	setlocale(LC_ALL, "");
	Game_Process gp;
	Racer Gonschik_Nelegalnyi;
	gp.getplayerinfo(Gonschik_Nelegalnyi);
	cout << Gonschik_Nelegalnyi.name;
}