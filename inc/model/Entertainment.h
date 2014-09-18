#ifndef _ENTERTAINMENT_H_
#define _ENTERTAINMENT_H_

#include "model/Entertainment.h"
#include "model/Facility.h"

namespace model {

class Entertainment: public Facility {
private:
	int latitude, longitud;
public:
	Entertainment(int, int, int);
	int getLatitud();
	int getLongitud();
};

}

#endif
