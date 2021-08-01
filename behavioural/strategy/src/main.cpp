/*
 * Description
 * A human and a dog are two agents that can talk. One instance of each gets created.
 * The dog talks, then the human. Finally the dog changes its talk strategy and talks again, differently.
*/

#include <stdio.h>
#include <Dog.hpp>
#include <Human.hpp>
#include <TalkStrategy.hpp>
#include <TalkStrategyA.hpp>
#include <TalkStrategyB.hpp>
#include <TalkStrategyC.hpp>

int main(){
	
	printf("This is an example of Strategy. A human and a dog have different talk strategies but they both talk.\n");
	
	// Instantiate two kinds of clients with two different talk strategies
	Dog dog(new TalkStrategyB());
	Human human (new TalkStrategyA());
	
	// Make the clients talk, using their own talk strategy
	printf("\nDog says: ");
	dog.doTheTalking();
	printf("\nHuman says: ");
	human.doTheTalking();
	
	// Change the dog's talk strategy
	dog.setTalkStrategy(new TalkStrategyC());
	
	// The dog talks again, in a different way
	printf("\nDog says: ");
	dog.doTheTalking();
	
}