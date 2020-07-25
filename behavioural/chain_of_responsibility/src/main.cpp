/*
 * Description
 *
*/

#include <iostream>
#include <string.h>
#include "WordHandler.hpp"
#include "SentenceHandler.hpp"

int main(){

    // Initialize variables
    std::string user_input;
    WordHandler wordHandler;
    SentenceHandler sentenceHandler;

    // Initialize chain of responsibility:
    // WordHandler (most specific) --> SentenceHandler (most general)
    wordHandler.setSuccessor(sentenceHandler);

    std::cout << ">This is an example of Chain of Responsibility.\n"
                 "Enter a word or a sentence, then read the output to know who "
                 "is dealing with your input:" << std::endl;

    // Wait for the user to enter a word or a sentence
    std::getline(std::cin, user_input);

    // Start the chain of responsibility
    wordHandler.handleRequest(user_input);
}
