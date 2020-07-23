/*
 * Description
 * ConcreteVehicleBuilder implements the AbstractVehicleBuilder abstract class and
 * defines the methods that are needed to build the vehicle.
*/

#include "ConcreteVehicleBuilder.hpp"

void ConcreteVehicleBuilder::buildWheels(int wheels){
	vehicle.setWheels(wheels);
}

void ConcreteVehicleBuilder::buildChassis(std::string chassis){
    vehicle.setChassis(chassis);
}

void ConcreteVehicleBuilder::buildEngine(std::string engine){
    vehicle.setEngine(engine);
}

Vehicle ConcreteVehicleBuilder::getVehicle(){
    return vehicle;
}
