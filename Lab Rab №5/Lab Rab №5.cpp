#include<iostream>
#include "Car.h"
#include "Base.h"

using namespace std;


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

	//приведение типов через dynamic_cast
	cout << "Приведение типов через dynamic_cast: " << endl;
	Truck* d = dynamic_cast<Truck*>(b);
	cout << d->classname() << endl;
	d->method();
	b->method();

	//небезопасное приведение типов
	Truck* e = new Truck(2, "MAN", 7);
	if (b->isA("Jeep"))
		e = (Truck*)b;
	e->method();
	b->method();


	delete a;
	delete b;
	delete c;
	delete d;
	delete e;
}
