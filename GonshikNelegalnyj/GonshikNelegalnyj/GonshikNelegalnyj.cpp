#include "pch.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Object
{
public:
	string name;
	virtual void
};

class Game_Process
{
public:
	string name;
	string Sex;
	void getplayerinfo()
	{

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
	cout << "дабдабдаб";
}