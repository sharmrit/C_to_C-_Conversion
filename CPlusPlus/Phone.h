#ifndef PHONE_H
#define PHONE_H
#include "MixedItemProperty.h"
class Phone :public MixedItemProperty
{
	public:
		Phone(int areaCode, int sevenDigitNumber);
		~Phone(){};
		void display(int id) const;
	private:
		unsigned int m_areaCode;
		unsigned long m_sevenDigitNumber;
};
#endif