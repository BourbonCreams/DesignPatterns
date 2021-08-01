/*
 * Description
 * A dog
*/

#ifndef _DOG_
#define _DOG_

#include <Agent.hpp>

class Dog : public Agent{


public:
	void doTheTalking();
	void setTalkStrategy(TalkStrategy*);
	
	// Constructor
	Dog(TalkStrategy*);
};

#endif