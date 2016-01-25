#ifndef HOUSE_H
#define HOUSE_H
#include "MixedItemProperty.h"
class House :public MixedItemProperty{
public:
	House(int houseNumber);
	~House(){};
	void display(int id) const;
private:
	unsigned long m_houseNumber;
};
#endif