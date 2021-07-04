#include <stdio.h>
#include <Singleton.hpp>

int main(){
	
	Singleton* singleton = Singleton::Instance();
	printf(">> I'm the Singleton. The global number of accesses to my information is %d\n\n", singleton->getNumberOfAccesses());
	
	printf("> I'm the Client. I need information from the Singleton\n");
	
	// Request info from the Singleton
	printf("> I'll ask for it...\n");
	int response = singleton->getInformation();
	
	// Print information received from the Singleton
	printf("> I got from the Singleton: %d\n\n", response);
	
	// Print global number of accesses to the information held by the Singleton
	printf(">> I'm the Singleton. The global number of accesses to my information is %d\n", singleton->getNumberOfAccesses());
}