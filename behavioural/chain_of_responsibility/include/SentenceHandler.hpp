/*
 * Description
 * SentenceHandler can deal with any sentences passed to it
*/


#ifndef _SENTENCEHANDLER_
#define _SENTENCEHANDLER_

#include "Handler.hpp"
#include <string>

class SentenceHandler : public Handler{

public:

    void handleRequest(std::string);

};

#endif
