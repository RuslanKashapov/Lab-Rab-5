#pragma once
#include<iostream>

using namespace std;

class Car
{
protected:
	int num_of_doors;
	string model;
	string name = "Car";

void type(int num_of_doors)//����� ��� ���������� 
{
	if (num_of_doors > 3)
	{
		cout << "������� ����������" << endl;
	}
	else
	{
		cout << "������� ��������� ����������" << endl << endl;
	}
}
//����������� � ���������� 
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
		cout << "����������� ����� classname (Car)" << endl;
		return name;
	}

	virtual bool isA(string classname)
	{
		cout << "����������� ����� isA (Car)" << endl;
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

	virtual void type(int num_of_doors)//����� ��� ���������
	{
		if (num_of_doors > 2)
		{
			cout << "�������� ������������" << endl;
		}
		else
		{
			cout << "������� ��������" << endl << endl;
		}
	}
public:
	Truck(int num_of_doors, string model, int weight) :Car(num_of_doors, model)//����������� � �����������
	{
		cout << "Truck(int num_of_doors, string model)" << endl;
		this->weight = weight;
	}

	virtual string classname()
	{
		cout << "����������� ����� classname (Truck)" << endl;
		return name;
	}

	virtual bool isA(string classname)
	{
		cout << "����������� ����� isA (Truck)" << endl;
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

