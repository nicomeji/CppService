#ifndef _FACILITY_TYPE_H_
#define _FACILITY_TYPE_H_

#include "model/dao/FacilityDao.h"

namespace dao {

class FacilityType {
public:
   static const FacilityType ATTRACTION;
   static const FacilityType ENTERTAINMENT;
private:
   FacilityDao *dao;
   FacilityType(FacilityDao *dao);
};

}

#endif
