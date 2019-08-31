/*
 * Description
 * Originator's header file
*/

#ifndef _ORIGINATOR_
#define _ORIGINATOR_

#include <string.h>
#include <Memento.hpp>

class Originator{

    std::string my_poetry;
    
public:

    // Set the poetry
    void setPoetry(std::string my_poetry);

    // Return the poetry
    std::string getPoetry();

    // Create a Memento
    Memento CreateMemento();

    // Use the previously saved Memento
    void setMemento(Memento a_memento);

};

#endif
