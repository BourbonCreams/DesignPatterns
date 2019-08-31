/*
 * Description
 * Memento's header file
*/

#ifndef _MEMENTO_
#define _MEMENTO_

#include <string>

class Memento{

    std::string my_saved_state;

public:
    // Save a state
    void setState(std::string state_to_be_saved);

    // Return the previously saved state
    std::string getState();
};

#endif
