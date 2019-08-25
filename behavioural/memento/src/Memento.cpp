/*
 * Description
 * The Memento class has two methods: setState() to save the current state and
 * getState() to return a previously saved state.
*/

#include <string.h>

class Memento{

    std::string my_saved_state;

public:
    void setState(std::string state_to_be_saved){
        std::cout << ">>Memento says: Saving current piece of poetry.." << std::endl;
        my_saved_state = state_to_be_saved;
    }

    std::string getState(){
        std::cout << ">>Memento says: Returning previous piece of poetry.." << std::endl;
        return my_saved_state;
    }
};
