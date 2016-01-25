#include "Age.h"
#include <iostream>
using namespace std;
Age::Age(int age) :m_ageYears(age)
{
}
void Age::display(int id) const{
	cout << "Element index number " << id << " is a Age " << m_ageYears << endl;
}
