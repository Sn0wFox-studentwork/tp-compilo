#include <iostream>
#include <string>
#include <cstdlib>
#include "lexer.h"
#include "Symbole.h"
#include "token.enum.h"

#include <string>

using namespace std;

// TODO: refactor using class Number, Expr... extending Symbole
// TODO: refactor 'cause it's pretty ugly
ReadSymbol Lexer::readSymbol(bool moveHead) {
    // Handle the end of the string
    if(this->cursor == this->toRead.size()) {
        // That's the end of the file
        return ReadSymbol(EOL, "eol");
    }

    // Used variables
    char c = this->toRead.at(this->cursor);
    int increment = 1;
    ReadSymbol* symbol;

    // Analyse string
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
            string number = "";
            int cursor = this->cursor;
            while(cursor != this->toRead.size() && isdigit(this->toRead.at(cursor))) {
                number += this->toRead.at(cursor);
                cursor++;
                increment++;
            }
            increment--;
            symbol = new ReadSymbol(VAL, number);
            break;
    }

    ReadSymbol sym(*symbol);
    delete symbol;
    this->stack.push(sym);
    if(moveHead) {
        this->cursor += increment;
    }
    return sym;
}

Lexer::Lexer(string& s): stack(), toRead(s), cursor(0) {
    // Nothing else to do
}

Lexer::~Lexer() {
    // Nothing to do for the moment
}