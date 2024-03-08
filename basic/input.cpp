#include <iostream>
#include <string> // Include this header for using std::string

int main() {
    std::string userInput;
    std::cout << "Please enter something: ";
    std::getline(std::cin, userInput); // Reads a line of text from the user
    std::cout << "You entered: " << userInput << std::endl;
    return 0;
}
