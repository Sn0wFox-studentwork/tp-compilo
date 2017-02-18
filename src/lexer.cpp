#include <iostream>
#include <string>
#include <cstdlib>
#include "lexer.h"
#include "symbols/Symbole.h"
#include "symbols/ReadSymbol.h"
#include "token.enum.h"

using namespace std;

// TODO: refactor using class Number, Expr... extending Symbole
// TODO: refactor 'cause it's pretty ugly
Symbole Lexer::readSymbol(bool moveHead) {
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
            // TODO: handle spaces correctly
            symbol = new ReadSymbol(UNKNOWN, "empty");
            break;
        case '+':
            symbol = new ReadSymbol(PLUS, "+");
            break;
        case '*':
            symbol = new ReadSymbol(MULT, "*");
            break;
        case '(':
            symbol = new ReadSymbol(OPEN, "(");
            break;
        case ')':
            symbol = new ReadSymbol(CLOSE, ")");
            break;
        default:
            // That's a digit
            // TODO: throw error if not a digit
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