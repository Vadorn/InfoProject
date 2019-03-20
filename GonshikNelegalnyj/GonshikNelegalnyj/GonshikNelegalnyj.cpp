#include "pch.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Object
{
public:
	string name;
	virtual void die() = 0;
};

class Game_Process : public Object
{
public:
	string sex;
	void getplayerinfo()
	{
		cout << "Введите Ваше имя" << endl;
		getline(cin, name);
		cout << "Введите Ваш пол" << endl;
		getline(cin, sex);
	};
	void die()
	{
		this->~Game_Process();
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
	gp.getplayerinfo();
	cout << gp.name;
}