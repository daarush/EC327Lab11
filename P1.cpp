//include headers and libraries
#include <iostream>
#include <string>
#include "Library.h"

int main() {
    Library library;

    std::string command;
    std::string bookName;

    while (true) {
        std::cout << "Enter a command: ";
        std::cin >> command;

        if (command == "a") {
            std::cin >> bookName;
            if (library.addBook(bookName)) {
                // std::cout << "Book added successfully." << std::endl;
            } else {
                std::cout << "Cannot add book." << std::endl;
            }
        } else if (command == "r") {
            std::cin >> bookName;
            if (library.removeBook(bookName)) {
                // std::cout << "Book removed successfully." << std::endl;
            } else {
                std::cout << "Cannot remove book." << std::endl;
            }
        } else if (command == "p") {
            library.print();
        } else if (command == "q") {
            cout << "Exiting." << endl;
            break;
        }
    }

    return 0;
}
