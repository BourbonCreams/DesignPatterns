/*
 * Description
 * A simple Vehicle class which has 3 properties:
 * 1. How many wheels it has
 * 2. A particular chassis model
 * 3. A particular engine model
*/

class Vehicle{

    int wheels;
    std::string chassis;
    std::string engine;

public:
    // Setters
    void setWheels(int wheels){
    	this->wheels = wheels;
    }

    void setChassis(std::string chassis){
    	this->chassis = chassis;
	}

    void setEngine(std::string engine){
    	this->engine = engine;
	}

    // Getters
    int getWheels(){
        return wheels;
    }

    std::string getChassis(){
        return chassis;
    }

    std::string getEngine(){
        return engine;
    }
};
