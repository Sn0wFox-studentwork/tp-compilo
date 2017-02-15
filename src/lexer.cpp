#include <iostream>
#include <string>
#include "lexer.h"
#include "Symbole.h"
#include "token.enum.h"

using namespace std;

Symbole Lexer::readSymbole() {
    string s;
    cin >> s;

    // Handle spaces
    while(s == " ") {
        cin >> s;
    }

    Symbole symbol(PLUS);
    this->stack.push(symbol);
    return symbol;
}

Lexer::Lexer(): stack() {
    // Nothing else to do
}