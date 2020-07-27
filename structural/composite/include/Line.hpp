/*
 * Description
 * A line is part of a text
*/

#ifndef _LINE_
#define _LINE_

#include <string>
#include <TextComponent.hpp>

class Line : public TextComponent{

    std::string myTxt;

public:
    void add(std::string);
    void remove(std::string);
    void printMe();

};

#endif
