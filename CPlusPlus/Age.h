#ifndef AGE_H
#define AGE_H
#include "MixedItemProperty.h"
class Age :public MixedItemProperty{
public:
	Age(int age); 
	~Age(){};
	void display(int id) const;
private:
	unsigned int m_ageYears;
};
#endif