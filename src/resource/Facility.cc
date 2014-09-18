#include "resource/Facility.h"
#include "model/Facility.h"

using namespace std;
namespace resource {

Facility::Facility(model::Facility facility) {
	this->id = facility.getId();
}

ostream& Facility::serialize (std::ostream &out) const {
	return out << "id:\"" << this->id << "\"" << endl;
}

ostream& operator<< (ostream &out, const Facility &facility) {
	return facility.serialize(out);
}

}
