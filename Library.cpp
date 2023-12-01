//include headers and libraries
#include <iostream>
#include <string>
#include "Library.h"

//implement class functions

Library::Library(){
    for(int i = 0; i < 10; i++){
        books[i] = "";
    }
}

bool Library::addBook(string bookName) {
    for (int i = 0; i < 10; i++) {
        if (books[i] == bookName) {
            return false;
        }
    }
    for (int i = 0; i < 10; i++) {
        if (books[i] == "") {
            books[i] = bookName;
            return true;
        }
    }
    return false;
}

bool Library::removeBook(string bookName) {
    for (int i = 0; i < 10; i++) {
        if (books[i] == bookName) {
            books[i] = "";
            return true;
        }
    }
    return false;
}


void Library::print() {
    cout << "Library contents:" << endl;
    for (int i = 0; i < 10; i++) {
        if (books[i] != "") {
            cout << books[i] << endl;
        }
    }
}

