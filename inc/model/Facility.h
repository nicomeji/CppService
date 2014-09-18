#ifndef _FACILITY_H_
#define _FACILITY_H_

#include <iostream>
#include <string>

namespace model {

class Facility {
private:
   int id;
public:
   Facility(int id);
   int getId ();
};

}

#endif
