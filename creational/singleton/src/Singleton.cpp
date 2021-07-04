#include <Singleton.hpp>


// Constructor
Singleton::Singleton(){
	this->information = 1234;
	this->numberOfAccesses = 0;
}

// Getter
int Singleton::getInformation(){
	
	numberOfAccesses = numberOfAccesses + 1;		// Increment total number of accesses
	return information;			// Return the required information
}

int Singleton::getNumberOfAccesses(){
	return numberOfAccesses;
}

Singleton* Singleton::Instance()
{
    static Singleton instance;
    return &instance;
}

// Setter
void Singleton::setInformation(int newInformation){
	information = newInformation;
}