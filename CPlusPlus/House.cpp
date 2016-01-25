#include "House.h"
#include <iostream>
using namespace std;
House::House(int houseNumber) :m_houseNumber(houseNumber)
{
}
void House::display(int id) const 
{
	cout << "Element index number " << id << " is a House number " << m_houseNumber << endl;
}
