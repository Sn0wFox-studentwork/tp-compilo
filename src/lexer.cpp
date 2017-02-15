#include <iostream>
#include <string>
#include "lexer.h"
#include "Symbole.h"
#include "token.enum.h"

#include <string>

using namespace std;

Symbole Lexer::readSymbol() {
    // Analyse string
    if(this->cursor == this->toRead.size()) {
        // That's the end of the file
        return Symbole(EOL);
    }
    char c = this->toRead.at(this->cursor);
    Symbole* symbol;
    switch (c) {
        case '\0':
            symbol = new Symbole(EOL);
            break;
        case '\n':
        case '\t':
        case ' ':
            symbol = new Symbole(EMPTY);
            break;
        case '+':
            symbol = new Symbole(PLUS);
            break;
        case '-':
            symbol = new Symbole(MINUS);
            break;
        case '(':
            symbol = new Symbole(OPEN);
            break;
        case ')':
            symbol = new Symbole(CLOSE);
            break;
        default:
            // That's a digit
            // TODO
            symbol = new Symbole(EMPTY);
            break;
    }

    Symbole sym(*symbol);
    delete symbol;
    this->stack.push(sym);
    this->cursor++;
    return sym;
}

Lexer::Lexer(string& s): stack(), toRead(s), cursor(0) {
    // Nothing else to do
}

Lexer::~Lexer() {
    // Nothing to do for the moment
}