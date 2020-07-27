/*
 * Description
 * Ask the user for 3 lines to add, then ask for a line to be removed
 * and finally print the text.
*/

#include <iostream>
#include <Text.hpp>
#include <Line.hpp>

int main(){

    // Initialize variables
    Text myText;
    std::string user_input;

    std::cout << "This is an example of the Composite design pattern" << std::endl;
    std::cout << "Type three lines, then remove one of them" << std::endl;

    std::cout << "Add first line: " << std::endl;
    std::getline(std::cin, user_input);

    // Add line to our text
    myText.add(user_input);

    std::cout << "Add second line: " << std::endl;
    std::getline(std::cin, user_input);

    // Add line to our text
    myText.add(user_input);

    std::cout << "Add third line: " << std::endl;
    std::getline(std::cin, user_input);

    // Add line to our text
    myText.add(user_input);

    std::cout << "Remove one line (type text of previous line): " << std::endl;
    std::getline(std::cin, user_input);

    // Add line to our text
    myText.remove(user_input);

    // Print final text
    std::cout << "The final text is: " << std::endl;
    myText.printMe();

}
