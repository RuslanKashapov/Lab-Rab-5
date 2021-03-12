#include<iostream>
#include "Car.h"
#include "Base.h"

using namespace std;

void func1(Base obj)
{
	cout << "func1(Base obj)" << endl;;
}

void func2(Base* obj)
{
	cout << "func2(Base* obj)" << endl;
}

void func3(Base& obj)
{
	cout << "func3(Base& obj)" << endl;
}


int main()
{
	setlocale(LC_ALL, "Russian");

	Car *a = new Car(3, "Toyota");
	Car *b = new Truck(2, "MAZ", 5);
	Truck *c = new Truck(2, "KAMAZ", 8);

	//проверка на принадлежность к классу
	cout << "classname: " << endl;
	cout << a->classname() << endl;
	cout << b->classname() << endl;
	cout << c->classname() << endl;

	//проверка на принадлежность к классу
	cout << "IsA: " << endl;
	cout << a->isA("Car");
	cout << b->isA("Truck");
	cout << c->isA("Car");
	cout << endl << endl;


	//приведение типов через dynamic_cast
	cout << "Приведение типов через dynamic_cast: " << endl;
	Truck* d = dynamic_cast<Truck*>(b);
	cout << d->classname() << endl;
	d->method();
	b->method();

	//небезопасное приведение типов
	Truck* e = new Truck(2, "MAN", 7);
	if (b->isA("Truck") == 1)
		e = (Truck*)b;
	e->method();
	b->method();


	delete a;
	delete b;
	delete c;

	cout << "Работа с классами Base и Desc: " << endl << endl;
	Base obj1;
	func1(obj1);
	cout << endl << endl;
	Base* obj2 = new Base();
	func2(obj2);
	delete obj2;
	cout << endl << endl;
	Base obj3;
	func3(obj3);
	cout << endl << endl; 



	cout << endl << endl;
	Desc desc1;
	func1(desc1);
	cout << endl << endl;
	Desc* desc2 = new Desc();
	func2(desc2);
	delete desc2;
	cout << endl << endl;
	cout << endl << endl;
	Desc desc3;
	func3(desc3);
	cout << endl << endl;

	cout << endl << endl;
	Base* obj4 = new Desc();
	func2(obj4);
	delete obj4;
	cout << endl << endl;
}
