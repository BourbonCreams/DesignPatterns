/*
 * Description
 * The Originator object has a piece of poetry that can change. In case we don't
 * like the new version, we can roll back to its previous saved state.
*/

#include <string.h>

class Originator{

    std::string my_poetry;

public:
    void setPoetry(std::string my_poetry){
        this->my_poetry = my_poetry;
    }

    std::string getPoetry(){
        return my_poetry;
    }

    Memento CreateMemento(){
        Memento my_new_memento;
        my_new_memento.setState(my_poetry);
        return my_new_memento;
    }

    void setMemento(Memento a_memento){
        my_poetry = a_memento.getState();
    }
};
