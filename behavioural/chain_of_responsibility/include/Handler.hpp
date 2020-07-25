/*
 * Description
 * Abstract class for the Handler class, which specifies the need for them
 * handleRequest() function
*/

#ifndef _HANDLER_HPP_
#define _HANDLER_HPP_

#include <string>

class Handler{

public:

    virtual void handleRequest(std::string) = 0;

};

#endif
