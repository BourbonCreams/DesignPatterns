/*
 * Description
 * An abstract Talk Strategy class. Classes that extend TalkStrategy have to define a way to talk
*/

#ifndef _TALK_STRATEGY_
#define _TALK_STRATEGY_

#include <stdio.h>

class TalkStrategy{
	
public:
	virtual void talk() = 0;
	
};

#endif