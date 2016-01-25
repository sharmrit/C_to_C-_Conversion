#include <iostream>
#include <string>
#include "Phone.h"
#include "Age.h"
#include "House.h"
#include "DisplayItems.h"
using namespace std;

int holdCommandWindow()
{
	string str;
	cout << "\nHit Enter To End Program ";
	getline(cin, str);
	return 0;
}


int main()
{
	Phone* ph1 = new Phone(313, 5467892);
	Phone* ph2 = new Phone(800, 3334455);
	Age* a1 = new Age(39);
	Age* a2 = new Age(21);
	House* h1 = new House(44842);

	DisplayItems* d = new DisplayItems;

	cout <<endl;
	d->add(ph1);
	d->add(ph2);
	d->add(a1);
	d->add(h1);
	d->add(a2);

	//To show data
	d->showData();

	//Clean memory
	d->deleteData();
	delete d;

	return holdCommandWindow();
}