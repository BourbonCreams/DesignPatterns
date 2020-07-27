/*
 * Description
 * Implementation of Line
*/

#include <Line.hpp>
#include <iostream>

void add(std::string){

    // This is a leaf, so we cannot add anything
    std::cout << "I'm a leaf, I cannot add anything" << std::endl;
}

void remove(std::string){

    // This is a leaf, so we cannot remove anything
    std::cout << "I'm a leaf, I cannot remove anything" << std::endl;
}

void Line::printMe(){

    // TODO: loop through the dynamic array and call the printMe function of the line
    std::cout << myTxt << std::endl;

}
