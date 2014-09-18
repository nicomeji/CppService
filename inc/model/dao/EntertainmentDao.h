#ifndef _ATTRACTION_DAO_H_
#define _ATTRACTION_DAO_H_

#include "model/dao/FacilityDao.h"
#include "model/Entertainment.h"

namespace dao {

class EntertainmentDao : public FacilityDao {
public:
   virtual model::Facility getFacility(int id);
};

}

#endif
