/*
 * Description
 * A text contains different lines that can be added, removed or printed
*/

#ifndef _TEXT_
#define _TEXT_

#include <string>
#include <TextComponent.hpp>
#include <vector>

class Text : public TextComponent{

    // TODO: use a dynamic array that contains Line's
    std::vector<std::string> myLines;

public:
    void add(std::string);
    void remove(std::string);
    void printMe();

};

#endif
