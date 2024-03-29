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
		system("cls");
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
	double t_razg;
	int v_max;
	double power;
	Car()
	{
		t_razg = 0;
		v_max = 0;
		name = "";
	};
	Car(double t, int v, string n) : Car()
	{
		t_razg = t;
		v_max = v;
		name = n;
		power = v_max / t_razg;
	};
	Car(Car &CopyingCar)
	{
		name = CopyingCar.name;
		t_razg = CopyingCar.t_razg;
		v_max = CopyingCar.v_max;
		power = CopyingCar.power;
	};
	double get_t_razgona()
	{
		return t_razg;
	};
	int get_v_max()
	{
		return v_max;
	};
	string get_name()
	{
		return name;
	};
	void set_t_razgona(double t)
	{
		t_razg = t;
	};
	void set_v_max(int v)
	{
		v_max = v;
	};
	void set_name(string n)
	{
		name = n;
	};
};

class Car1
{
public:
	string name = "KOENIGSEGG AGERA RS";
	double t_razg = 3.0;
	int v_max = 402;
};

int main()
{
	setlocale(LC_ALL, "");
	Game_Process gp;
	gp.getplayerinfo();
	cout << gp.name;
}