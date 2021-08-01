/*
 * Description
 * A human that has a way to talk
*/

#include <Human.hpp>

Human::Human(TalkStrategy* ts){
	
	myTalkStrategy = ts;
	
}

void Human::doTheTalking(){
	
	myTalkStrategy->talk();
	
}

void Human::setTalkStrategy(TalkStrategy* ts){
	
	myTalkStrategy = ts;
	printf("\nI'm a human and my Talk Strategy has changed");
	
}