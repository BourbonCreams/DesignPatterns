/*
 * Description
 * An agent is an entity that can talk, in a way or another.
*/

#ifndef _AGENT_
#define _AGENT_

#include <TalkStrategy.hpp>
#include <stdio.h>

class Agent{
	

public:	
	
	TalkStrategy *myTalkStrategy;
	
	void setTalkStrategy(TalkStrategy*);
	
	void doTheTalking();
};

#endif