#include <iostream>
#include <string>
#include <cstdlib>
#include "lexer.h"
#include "symbols/Symbol.h"
#include "symbols/ReadSymbol.h"
#include "symbols/Number.h"
#include "symbols/Mult.h"
#include "symbols/Plus.h"
#include "symbols/Open.h"
#include "symbols/Close.h"
#include "symbols/Eol.h"
#include "token.enum.h"

using namespace std;

// TODO: refactor using class Number, Expr... extending Symbol
// TODO: refactor 'cause it's pretty ugly
Symbol* Lexer::readSymbol(bool moveHead) {
    // Handle the end of the string
    if(this->cursor >= this->toRead.size()) {
        // That's the end of the file
        this->stack.push(new Eol);
        return this->stack.top();
    }

    // Used variables
    char c = this->toRead.at(this->cursor);
    int increment = 1;
    Symbol* symbol;

    // Analyse string
    switch (c) {
        case '\0':
            symbol = new Eol;
            break;
        case '\n':
        case '\t':
        case ' ':
            // TODO: handle spaces correctly
            symbol = new ReadSymbol(UNKNOWN, "empty");
            break;
        case '+':
            symbol = new Plus;
            break;
        case '*':
            symbol = new Mult;
            break;
        case '(':
            symbol = new Open;
            break;
        case ')':
            symbol = new Close;
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
            symbol = new Number(atoi(number.c_str()));
            break;
    }

    this->stack.push(symbol);
    if(moveHead) {
        this->cursor += increment;
    }
    return symbol;
}

Lexer::Lexer(string& s): stack(), toRead(s), cursor(0) {
    // Nothing else to do
}

Lexer::~Lexer() {
    while(!stack.empty()) {
        delete stack.top();
        stack.pop();
    }
}