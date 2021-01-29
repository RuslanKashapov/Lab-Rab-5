#pragma once
#include<iostream>

using namespace std;

class Base
{
public:
	Base()
	{
		cout << "����������� �� ��������� Base()" << endl;
	}
	Base(Base *obj)
	{
		cout << "����������� � ����������� Base(Base *obj)" << endl;
	}
	Base(Base &obj)
	{
		cout << "����������� ����������� Base(Base &obj)" << endl;
	}

	~Base() 
	{
		cout << "���������� Base ~Base()" << endl;
	}
};

class Desc : public Base
{
public:
	Desc()
	{
		cout << "����������� �� ��������� Desc()" << endl;
	}
	Desc(Desc* obj)
	{
		cout << "����������� � ����������� Desc(Desc *obj)" << endl;
	}
	Desc(Desc& obj)
	{
		cout << "����������� ����������� Desc(Desc &obj)" << endl;
	}

	~Desc()
	{
		cout << "���������� Desc ~Desc()" << endl;
	}
};

