#ifndef MIXEDITEMPROPERTY_H
#define MIXEDITEMPROPERTY_H
class MixedItemProperty{
public:
	virtual ~MixedItemProperty(){};
	virtual void display(int id) const = 0;
};
#endif