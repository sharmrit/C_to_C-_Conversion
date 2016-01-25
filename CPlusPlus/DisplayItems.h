#ifndef DISPLAYITEMS_H
#define DISPLAYITEMS_H
#include "MixedItemProperty.h"
#include <vector>
using namespace std;
class DisplayItems
{
	public:
		void showData();
		void add(MixedItemProperty*);
		vector<MixedItemProperty*> getItems();
		void deleteData();
	private:
		vector<MixedItemProperty*> items;
};
#endif