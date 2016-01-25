#include "Phone.h"
#include <iostream>
using namespace std;

Phone::Phone(int areaCode, int sevenDigitNumber): m_areaCode(areaCode), m_sevenDigitNumber(sevenDigitNumber)
{
}

void Phone::display(int id) const 
{
	cout << "Element index number " << id << " is a Phone extension (" << m_areaCode << ") " << m_sevenDigitNumber << endl;
}
