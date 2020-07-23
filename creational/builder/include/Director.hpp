/*
 * Description
 * Defines the basic set of functions that a Director should implement
 *
 * The Director uses the Builder class to create a brand new vehicle (the complex object)
 * using the construct() method, which receives the specifications for the new vehicle,
 * and the getVehicle() method, which returns the brand new vehicle.
*/

#ifndef _DIRECTOR_
#define _DIRECTOR_

#include "Vehicle.hpp"
#include "ConcreteVehicleBuilder.hpp"

class Director{

    ConcreteVehicleBuilder builder;

public:

    // Create a new vehicle with the requested specifications
    void construct(int number_of_wheels, std::string chassis, std::string engine);

    // Return the brand new vehicle
    Vehicle getVehicle();

};

#endif
