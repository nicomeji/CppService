#ifndef _FACILITY_RESOURCE_H_
#define _FACILITY_RESOURCE_H_

#include "model/Facility.h"

namespace resource {

class Facility {
protected:
   int id;
protected:
   virtual std::ostream& serialize (std::ostream &out) const;
public:
   friend std::ostream& operator<< (std::ostream &out, const Facility &cPoint);
   Facility(model::Facility);
};

}

#endif
