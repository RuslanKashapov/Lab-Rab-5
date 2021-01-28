#pragma once
#include<iostream>

using namespace std;

class Car
{
protected:
	int num_of_doors;
	string model;

virtual void type(int num_of_doors)//����� ��� ���������� 
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
};

class Truck :public Car
{
protected:
	int weight;

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

	virtual ~Truck()
	{
		cout << "~Truck()" << endl;
	}
};

