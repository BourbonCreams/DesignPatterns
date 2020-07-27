/*
 * Description
 * An abstract class to represent a text
*/

#ifndef _TEXTCOMPONENT_
#define _TEXTCOMPONENT_

#include <string>

class TextComponent{

public:

    virtual void add(std::string) = 0;
    virtual void remove(std::string) = 0;
    virtual void printMe() = 0;

};

#endif
