/*
 * Description
 * ConcreteVehicleBuilder implements the AbstractVehicleBuilder abstract class and
 * defines the methods that are needed to build the vehicle.
*/

#include "../include/AbstractVehicleBuilder.hpp"

class ConcreteVehicleBuilder : public AbstractVehicleBuilder{

	Vehicle vehicle;

public:

    void buildWheels(int wheels){
    	vehicle.setWheels(wheels);
    }

    void buildChassis(std::string chassis){
        vehicle.setChassis(chassis);
    }

    void buildEngine(std::string engine){
        vehicle.setEngine(engine);
    }

    Vehicle getVehicle(){
        return vehicle;
    }
};
