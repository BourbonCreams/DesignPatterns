/*
 * Description
 *
*/

#include <iostream>
#include <string.h>
#include "Memento.hpp"
#include "Originator.hpp"

int main(){

    std::string user_input;

    // Create the Originator and Memento objects
    Originator my_originator;
    Memento my_memento;


    // Set poetry's lines
    std::string line1 = "Roses are red, \n";
    std::string line2 = "Violets are blue,\n";
    std::string line3 = "This poetry is so original\n";
    std::string line4 = "And so are you!\n";

    // Set the Originator's state to be a piece of poetry
    std::cout << ">A piece of poetry:\n" << std::endl;
    my_originator.setPoetry(line1 + line2 + line3 + line4);

    // Print current poetry
    std::cout << my_originator.getPoetry() << std::endl;

    // Save current state in the Memento
    my_memento = my_originator.CreateMemento();

    // Tell the user that their new line is not good enough, so change it to
    // its previous state
    std::cout << ">Ok, your turn. Enter a new third line for this piece of "
                 "poetry. Press Enter when you're done.." << std::endl;

    // Wait for the user to insert a new third line
    std::getline(std::cin, user_input);

    // Print new piece of poetry
    my_originator.setPoetry(line1 + line2 + user_input + "\n" + line4);
    std::cout << my_originator.getPoetry() << std::endl;

    // Tell the user that their new line is not good enough, so suggest to
    // go back to the    previous state
    std::cout << "\n>Mmmm doesn't sound as good.. Let's go back to the previous "
                 "state! Press Enter when you're ready.." << std::endl;

    std::cin.ignore();

    // Set previous state and show result
    my_originator.setMemento(my_memento);
    std::cout << "\n" << my_originator.getPoetry() << std::endl;
    std::cout << ">Now that's a lot better!" << std::endl;

    exit(0);
}
