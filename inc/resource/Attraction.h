#ifndef _ATTRACTION_RESORCE_H_
#define _ATTRACTION_RESORCE_H_

#include "resource/Facility.h"
#include "model/Attraction.h"
#include <iostream>

namespace resource {

class Attraction : public Facility {
private:
	int price;
protected:
   virtual std::ostream& serialize (std::ostream &out) const;
public:
	Attraction (model::Attraction);
};

}

#endif
