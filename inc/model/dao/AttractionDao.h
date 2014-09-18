#ifndef _ENTERTAINMENT_DAO_H_
#define _ENTERTAINMENT_DAO_H_

#include "model/dao/FacilityDao.h"
#include "model/Attraction.h"

namespace dao {

class AttractionDao : public FacilityDao {
public:
	virtual model::Facility getFacility(int id);
};

}

#endif
