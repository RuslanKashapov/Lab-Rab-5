#pragma once
#include<iostream>

using namespace std;

class Base
{
public:
	Base()
	{
		cout << "Конструктор по умолчанию Base()" << endl;
	}
	Base(Base *obj)
	{
		cout << "Конструктор с параметрами Base(Base *obj)" << endl;
	}
	Base(Base &obj)
	{
		cout << "Конструктор копирования Base(Base &obj)" << endl;
	}

	~Base() 
	{
		cout << "Деструктор Base ~Base()" << endl;
	}
};

class Desc : public Base
{
public:
	Desc()
	{
		cout << "Конструктор по умолчанию Desc()" << endl;
	}
	Desc(Desc* obj)
	{
		cout << "Конструктор с параметрами Desc(Desc *obj)" << endl;
	}
	Desc(Desc& obj)
	{
		cout << "Конструктор копирования Desc(Desc &obj)" << endl;
	}

	~Desc()
	{
		cout << "Деструктор Desc ~Desc()" << endl;
	}
};

