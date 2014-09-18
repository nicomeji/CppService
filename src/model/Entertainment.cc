#include "model/Entertainment.h"

namespace model {

Entertainment::Entertainment(int id, int latitude, int longitud) :
		Facility(id) {
	this->latitude = latitude;
	this->longitud = longitud;
}

int Entertainment::getLatitud() {
	return this->latitude;
}
int Entertainment::getLongitud() {
	return this->longitud;
}


}
