#include "resource/Attraction.h"
#include "resource/Facility.h"
#include "model/Attraction.h"

using namespace std;
namespace resource {

Attraction::Attraction(model::Attraction attraction) :
		Facility(attraction) {
	this->price = attraction.getPrice();
}

ostream& Attraction::serialize (std::ostream &out) const {
	return out << "id:\"" << this->id << "\"" << endl;
}

}
