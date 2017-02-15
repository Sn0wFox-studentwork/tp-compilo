#include <iostream>
#include <string>
#include "lexer.h"

Symbole Lexer::readSymbole() {
    string s;
    cin >> s;

    // Handle spaces
    while(s == " ") {
        cin >> s;
    }

    Symbole symbol;
    this->stack.push_back(symbol);
    return symbol;
}