#include "DisplayItems.h"
#include "Phone.h"
#include "Age.h"
#include "House.h"

typedef vector<MixedItemProperty*> storeItems;

void DisplayItems::add(MixedItemProperty* item)
{
	items.push_back(item);
}

storeItems DisplayItems::getItems()
{
	return items;
}

void DisplayItems::showData()
{
	int i = 0;
	storeItems::const_iterator counter;
	for (counter = items.begin(); counter != items.end(); ++counter)
	{
		(*counter)->display(i);
		i++;
	}
}

void DisplayItems::deleteData()
{
	int i = 0;
	storeItems::const_iterator counter;
	for (counter = items.begin(); counter != items.end(); ++counter)
	{
		delete (*counter);
		i++;
	}
}