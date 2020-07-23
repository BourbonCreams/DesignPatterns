/*
 * Description
 * The Director class defines the methods declared by the Director abstract class.
*/

#include "Director.hpp"

// Create a new vehicle with the requested specifications
void Director::construct(int number_of_wheels, std::string chassis, std::string engine){
    builder.buildWheels(number_of_wheels);
    builder.buildChassis(chassis);
    builder.buildEngine(engine);
}

// Return the brand new vehicle
Vehicle Director::getVehicle(){
    return builder.getVehicle();
}
