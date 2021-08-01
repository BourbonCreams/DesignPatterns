/*
 * Description
 * A dog that has a way to talk
*/

#include <Dog.hpp>

Dog::Dog(TalkStrategy* ts){
	
	myTalkStrategy = ts;
	
}

void Dog::doTheTalking(){
	
	myTalkStrategy->talk();
	
}

void Dog::setTalkStrategy(TalkStrategy* ts){
	
	myTalkStrategy = ts;
	printf("\nI'm a dog and my Talk Strategy has changed");
	
}