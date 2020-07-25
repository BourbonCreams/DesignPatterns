/*
 * Description
 * The WordHandler object can deal with words but not with sentences. Its successor
 * is a SentenceHandler, to which WordHandler passes any non-word
*/

#include "WordHandler.hpp"
#include <iostream>

// If myString is a single word, i.e. simplified to "no spaces contained", WordHandler will deal
// with it. Otherwise it will pass it along the chain to SentenceHandler
void WordHandler::handleRequest(std::string myString){

    if(myString.find(" ") == std::string::npos){
        std::cout << "> I'm the WORD handler and I'm dealing with: " + myString << std::endl;
    }
    else{
        std::cout << "> I'm the WORD handler and I can't deal with this non-word." << std::endl
                  << "> I'll pass it along to my more general successor..\n" << std::endl;
        successor.handleRequest(myString);
    }

}

// Set the successor of WordHandler, which is a SentenceHandler object
void WordHandler::setSuccessor(SentenceHandler mySentenceHandler){
    successor = mySentenceHandler;
}
