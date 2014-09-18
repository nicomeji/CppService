#include "model/dao/EntertainmentDao.h"

using namespace model;
namespace dao {

Facility EntertainmentDao::getFacility(int id) {
	return Entertainment(id, 200, 300);
}
;

}
