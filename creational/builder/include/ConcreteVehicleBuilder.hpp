/*
 * Description
 * Declares the basic set of functions that a concrete Vehicle builder should implement
*/
#ifndef _CONCRETEVEHICLEBUILDER_
#define _CONCRETEVEHICLEBUILDER_

#include "AbstractVehicleBuilder.hpp"

class ConcreteVehicleBuilder : public AbstractVehicleBuilder{

    Vehicle vehicle;

public:
    void buildWheels(int wheels);
    void buildChassis(std::string chassis);
    void buildEngine(std::string engine);

    Vehicle getVehicle();

};

#endif
