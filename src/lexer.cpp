#include <iostream>
#include <string>
#include "lexer.h"
#include "Symbole.h"
#include "token.enum.h"

#include <string>

using namespace std;

ReadSymbol Lexer::readSymbol() {
    // Analyse string
    if(this->cursor == this->toRead.size()) {
        // That's the end of the file
        return ReadSymbol(EOL, "eol");
    }
    char c = this->toRead.at(this->cursor);
    ReadSymbol* symbol;
    switch (c) {
        case '\0':
            symbol = new ReadSymbol(EOL, "eol");
            break;
        case '\n':
        case '\t':
        case ' ':
            symbol = new ReadSymbol(EMPTY, "empty");
            break;
        case '+':
            symbol = new ReadSymbol(PLUS, "+");
            break;
        case '-':
            symbol = new ReadSymbol(MINUS, "-");
            break;
        case '(':
            symbol = new ReadSymbol(OPEN, "(");
            break;
        case ')':
            symbol = new ReadSymbol(CLOSE, ")");
            break;
        default:
            // That's a digit
            // TODO
            symbol = new ReadSymbol(EMPTY, "empty");
            break;
    }

    ReadSymbol sym(*symbol);
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