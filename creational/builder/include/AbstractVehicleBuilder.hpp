/*
 * Description
 * Defines the basic set of functions that a Vehicle builder should implement
*/

class AbstractVehicleBuilder{

public:
    virtual void buildWheels(int wheels) = 0;
    virtual void buildChassis(std::string chassis) = 0;
    virtual void buildEngine(std::string engine) = 0;

    virtual Vehicle getVehicle() = 0;

};
