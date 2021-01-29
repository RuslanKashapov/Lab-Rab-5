#include<iostream>
#include "Car.h"

using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");

	Car *a = new Car(3, "Toyota");
	Car *b = new Truck(2, "MAZ", 32);
	Truck *c = new Truck(2, "KAMAZ", 34);

	cout << "classname: " << endl;
	cout << a->classname() << endl;
	cout << b->classname() << endl;
	cout << c->classname() << endl;

	cout << "IsA: " << endl;
	cout << a->isA("Car");
	cout << b->isA("Truck");
	cout << c->isA("Car");

	delete a;
	delete b;
	delete c;
}
