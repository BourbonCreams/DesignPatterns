/*
 * Description
 * The client asks the Façade object to withdraw cash. 
 * Façade will call the appropriate objects to carry out the operation.
*/

#include <Facade.hpp>
#include <iostream>

int main(){
	
	// Initialize variables
	Facade facade;
	
	// Initial message
	std::cout << "Trying to take out 20 euros out of my bank account. I think I had 1000 euros..." << std::endl;
	
	// Ask to withdraw money (€20) using your pin (1234)
	facade.withdrawCash(1234, 20);
	
	// Goodbye message
	std::cout << "End of the Facade example" << std::endl;
}