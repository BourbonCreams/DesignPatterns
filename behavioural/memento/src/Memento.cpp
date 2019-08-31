/*
 * Description
 * The Memento class has two methods: setState() to save the current state and
 * getState() to return a previously saved state.
*/

#include <Memento.hpp>
#include <iostream>


void Memento::setState(std::string state_to_be_saved){
    std::cout << ">>Memento says: Saving current piece of poetry.." << std::endl;
    my_saved_state = state_to_be_saved;
}

std::string Memento::getState(){
    std::cout << ">>Memento says: Returning previous piece of poetry.." << std::endl;
    return my_saved_state;
}
