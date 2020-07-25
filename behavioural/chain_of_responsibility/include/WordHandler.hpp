/*
 * Description
 * The Word handler on top of the handleRequest() function has a successor too,
 * because it is the first level of the chain. The successor is the SentenceHandler
*/

#ifndef _WORDHANDLER_
#define _WORDHANDLER_

#include "Handler.hpp"
#include "SentenceHandler.hpp"
#include <string>

class WordHandler : public Handler{

    SentenceHandler successor;

public:

    void handleRequest(std::string);
    void setSuccessor(SentenceHandler);

};

#endif
