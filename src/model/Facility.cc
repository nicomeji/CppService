#include "model/Facility.h"

using namespace std;
namespace model {

Facility::Facility (int id) {
   this->id=id;
}

int Facility::getId() {
   return id;
}
}
