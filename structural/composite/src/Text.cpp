/*
 * Description
 * Implementation of Text
*/

#include <Text.hpp>
#include <iostream>
#include <algorithm>

// Add a line to the text
void Text::add(std::string newLine){

    myLines.push_back(newLine);

}

// Remove a line from the text
void Text::remove(std::string lineToBeRemoved){

    myLines.erase(std::find(myLines.begin(), myLines.end(), lineToBeRemoved));

}

// Print the entire text
void Text::printMe(){

    // Iterate through all the lines in the text and print them
    for (int i=0; i<myLines.size(); i++){
        std::cout << myLines[i] << std::endl;
    }

}
