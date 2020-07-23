/*
 * Description
 * In this example a Vehicle is created using a Director, which receives the
 * specifications for the new vehicle.
*/

#include <iostream>
#include "Director.hpp"

int main(){

    std::cout << "> This is an example of the Builder design pattern" << std::endl;

    Vehicle my_vehicle;
    Director director;

    // New vehicle's specifications
    int number_of_wheels = 4;
    std::string chassis = "ABC123";
    std::string engine = "EEE111";

    // Constructing and shipping new vehicle
    std::cout << "\nI am constructing your brand new vehicle..." << std::endl;
    director.construct(number_of_wheels, chassis, engine);
    my_vehicle = director.getVehicle();
    std::cout << "Brand new vehicle constructed and shipped." << std::endl;

    std::cout << "\nI am your brand new vehicle and:" << std::endl;
    std::cout << "- I have " << my_vehicle.getWheels() << " wheels" << std::endl;
    std::cout << "- I have the \"" << my_vehicle.getChassis() << "\" model of chassis" << std::endl;
    std::cout << "- I have the \"" << my_vehicle.getEngine() << "\" model of engine" << std::endl;

    exit(0);
}
