#include "model/dao/AttractionDao.h"

using namespace model;
namespace dao {

Facility AttractionDao::getFacility(int id) {
	return Attraction(id, 100);
}
;

}
