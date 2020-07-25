/*
 * Description
 * The SentenceHandler object can deal with any sentences and is the last object
 * in the chain of responsibility
*/

#include "SentenceHandler.hpp"
#include <iostream>

void SentenceHandler::handleRequest(std::string myString){

    // I'm the last in the chain (most general handler),
    // so I will deal with whatever object
    std::cout << ">>I'm the SENTENCE handler and I'm dealing with: " + myString << std::endl;

}
