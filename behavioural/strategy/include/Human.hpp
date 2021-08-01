/*
 * Description
 * A human
*/

#ifndef _HUMAN_
#define _HUMAN_

#include <Agent.hpp>

class Human : public Agent{


public:
	void doTheTalking();
	void setTalkStrategy(TalkStrategy*);
	
	// Constructor
	Human(TalkStrategy*);
};

#endif