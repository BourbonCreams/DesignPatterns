/*
 * Description
 * Defines the basic set of functions that a Vehicle should implement
*/

#ifndef _VEHICLE_
#define _VEHICLE_

#include <string>

class Vehicle{

    int wheels;
    std::string chassis;
    std::string engine;

public:
    // Setters
    void setWheels(int wheels);

    void setChassis(std::string chassis);

    void setEngine(std::string engine);

    // Getters
    int getWheels();

    std::string getChassis();

    std::string getEngine();

};

#endif
