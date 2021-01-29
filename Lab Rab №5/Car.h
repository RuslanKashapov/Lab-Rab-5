#pragma once
#include<iostream>

using namespace std;

class Car
{
protected:
	int num_of_doors;
	string model;
	string name = "Car";

void type(int num_of_doors)//метод для автомобиля 
{
	if (num_of_doors > 3)
	{
		cout << "Обычный автомобиль" << endl;
	}
	else
	{
		cout << "Немного необычный автомобиль" << endl << endl;
	}
}
//конструктор и деструктор 
public:
	Car(int num_of_doors, string model)
	{
		cout << "Car(int num_of_doors, string model)" << endl;
		this->num_of_doors = num_of_doors;
		this->model = model;
	}

	virtual ~Car()
	{
		cout << "~Car()" << endl;
	}

	virtual string classname()
	{
		cout << "Виртуальный метод classname (Car)" << endl;
		return name;
	}

	virtual bool isA(string classname)
	{
		cout << "Виртуальный метод isA (Car)" << endl;
		if (classname == "Car")
			return 1;
		else
			return 0;
	}
};

class Truck :public Car
{
protected:
	int weight;
	string name = "Truck";

	virtual void type(int num_of_doors)//метод для грузовика
	{
		if (num_of_doors > 2)
		{
			cout << "Грузовой микроавтобус" << endl;
		}
		else
		{
			cout << "Обычный грузовик" << endl << endl;
		}
	}
public:
	Truck(int num_of_doors, string model, int weight) :Car(num_of_doors, model)//конструктор с параметрами
	{
		cout << "Truck(int num_of_doors, string model)" << endl;
		this->weight = weight;
	}

	virtual string classname()
	{
		cout << "Виртуальный метод classname (Truck)" << endl;
		return name;
	}

	virtual bool isA(string classname)
	{
		cout << "Виртуальный метод isA (Truck)" << endl;
		if (classname == "Truck")
			return 1;
		else
			return 0;
	}

	virtual ~Truck()
	{
		cout << "~Truck()" << endl;
	}
};

