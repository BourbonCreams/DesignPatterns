/*
 * Description
 * A simple Vehicle class which has 3 properties:
 * 1. How many wheels it has
 * 2. A particular chassis model
 * 3. A particular engine model
*/

#include "Vehicle.hpp"


// Setters
void Vehicle::setWheels(int wheels){
	this->wheels = wheels;
}

void Vehicle::setChassis(std::string chassis){
	this->chassis = chassis;
}

void Vehicle::setEngine(std::string engine){
	this->engine = engine;
}

// Getters
int Vehicle::getWheels(){
    return wheels;
}

std::string Vehicle::getChassis(){
    return chassis;
}

std::string Vehicle::getEngine(){
    return engine;
}
