/*
 * Description
 * The Originator object has a piece of poetry that can change. In case we don't
 * like the new version, we can roll back to its previous saved state.
*/

#include <Originator.hpp>

void Originator::setPoetry(std::string my_poetry){
    this->my_poetry = my_poetry;
}

std::string Originator::getPoetry(){
    return my_poetry;
}

Memento Originator::CreateMemento(){
    Memento my_new_memento;
    my_new_memento.setState(my_poetry);
    return my_new_memento;
}

void Originator::setMemento(Memento a_memento){
    my_poetry = a_memento.getState();
}
