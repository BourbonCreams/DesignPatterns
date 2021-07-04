/*
 * Description
 * The Singleton class allows one single instance to be created and it controls access over information it holds.
*/

#ifndef _SINGLETON_
#define _SINGLETON_

#include <stdio.h>

class Singleton{
	
	int information;
	int numberOfAccesses;		// Keeps the number of accesses to the information the Singleton stores
	
public:
	// Getters
	int getInformation();
	int getNumberOfAccesses();
	
	// Setters
	void setInformation(int);
	
	static Singleton* Instance();

private:
	static Singleton* instance;
	Singleton();
	
};

#endif