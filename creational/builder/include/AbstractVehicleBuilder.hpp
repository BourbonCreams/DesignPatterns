/*
 * Description
 * Defines the basic set of functions that a concrete Vehicle builder should implement
*/
#ifndef _ABSTRACTVEHICLEBUILDER_
#define _ABSTRACTVEHICLEBUILDER_

#include <string>
#include "Vehicle.hpp"

class AbstractVehicleBuilder{

public:
    virtual void buildWheels(int wheels) = 0;
    virtual void buildChassis(std::string chassis) = 0;
    virtual void buildEngine(std::string engine) = 0;

    virtual Vehicle getVehicle() = 0;

};

#endif
