#pragma once
#include<iostream>

using namespace std;

class Car
{
protected:
	int num_of_doors;
	string model;

virtual void type(int num_of_doors)//метод дл€ автомобил€ 
{
	if (num_of_doors > 3)
	{
		cout << "ќбычный автомобиль" << endl;
	}
	else
	{
		cout << "Ќемного необычный автомобиль" << endl << endl;
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
};

class Truck :public Car
{
protected:
	int weight;

	virtual void type(int num_of_doors)//метод дл€ грузовика
	{
		if (num_of_doors > 2)
		{
			cout << "√рузовой микроавтобус" << endl;
		}
		else
		{
			cout << "ќбычный грузовик" << endl << endl;
		}
	}
public:
	Truck(int num_of_doors, string model, int weight) :Car(num_of_doors, model)//конструктор с параметрами
	{
		cout << "Truck(int num_of_doors, string model)" << endl;
		this->weight = weight;
	}

	virtual ~Truck()
	{
		cout << "~Truck()" << endl;
	}
};

