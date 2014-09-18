#include "service/FacilityType.h"
#include "model/dao/EntertainmentDao.h"
#include "model/dao/AttractionDao.h"

namespace dao {
const FacilityType FacilityType::ATTRACTION = FacilityType(new AttractionDao());
const FacilityType FacilityType::ENTERTAINMENT = FacilityType(new EntertainmentDao());

FacilityType::FacilityType (FacilityDao *dao){
   this->dao=dao;
}

}
