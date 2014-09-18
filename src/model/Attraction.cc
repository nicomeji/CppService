#include "model/Attraction.h"

using namespace std;
namespace model {

Attraction::Attraction(int id, int price) :
		Facility(id) {
	this->price = price;
}

int Attraction::getPrice(){
	return this->price;
}

}
