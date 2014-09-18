#ifndef _ATTRACTION_H_
#define _ATTRACTION_H_

#include "model/Facility.h"

namespace model {

class Attraction: public Facility {
private:
	int price;
public:
	Attraction(int, int);
	int getPrice();
};

}

#endif
