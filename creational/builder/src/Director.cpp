/*
 * Description
 * The Director uses the Builder class to create a brand new vehicle (the complex object)
 * using the construct() method, which receives the specifications for the new vehicle,
 * and the getVehicle() method, which returns the brand new vehicle.
*/

#include "Vehicle.cpp"
#include "ConcreteVehicleBuilder.cpp"

class Director{

    ConcreteVehicleBuilder builder;

public:

    // Create a new vehicle with the requested specifications
    void construct(int number_of_wheels, std::string chassis, std::string engine){
        builder.buildWheels(number_of_wheels);
        builder.buildChassis(chassis);
        builder.buildEngine(engine);
    }

    // Return the brand new vehicle
    Vehicle getVehicle(){
        return builder.getVehicle();
    }

};
