#include <iostream>
#include "model/Facility.h"
#include "model/dao/AttractionDao.h"

using namespace std;
using namespace model;
using namespace dao;

int main (void) {
   /*
    * Ver si es posible usar un enum junto con un template para
    * devolver un facilityDao buscado.
    * FacilityDao <ATTRACTION> anyDao;
    *
    * No se puede, los templates se resuleven en tiempo de compilacion.
    */
   auto anyDao = AttractionDao();
   cout << anyDao.getFacility(123456).getId() << endl;
}
