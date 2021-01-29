#pragma once
#include<iostream>

using namespace std;

class Car
{
protected:
	int num_of_doors;
	string model;
	string name = "Car";

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

	void method()
	{
		cout << "Не виртуал - автомобиль" << endl;
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

public:
	Truck(int num_of_doors, string model, int weight) :Car(num_of_doors, model)//конструктор с параметрами
	{
		cout << "Truck(int num_of_doors, string model)" << endl;
		this->weight = weight;
	}

	void method()
	{
		cout << "Виртуал - грузовик" << endl;
	}

	virtual string classname()
	{
		cout << "Виртуальный метод classname (TruckФ)" << endl;
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

