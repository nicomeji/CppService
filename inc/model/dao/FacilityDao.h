#ifndef _FACILITY_DAO_H_
#define _FACILITY_DAO_H_

#include "model/Facility.h"

namespace dao {

class FacilityDao {
public:
   virtual model::Facility getFacility(int id) = 0;
};

}

#endif
