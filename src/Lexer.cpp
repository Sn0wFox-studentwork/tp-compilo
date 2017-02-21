#include <iostream>
#include <string>
#include <cstdlib>
#include "Lexer.h"
#include "symbols/Symbol.h"
#include "symbols/ReadSymbol.h"
#include "symbols/Number.h"
#include "symbols/Mult.h"
#include "symbols/Plus.h"
#include "symbols/Open.h"
#include "symbols/Close.h"
#include "symbols/Eol.h"
#include "Token.enum.h"

using namespace std;

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
            cursor++;
            cout << "SPACE" << endl;
            symbol = readSymbol(moveHead);
            cout << "SYMBOL ADDRESS: " << symbol << endl;
            cout << "SYMBOL VALUE: " << *symbol << endl;
            cursor--;
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
            size_t cursor = this->cursor;
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

void Lexer::load(std::string toLoad) {
    this->toRead = toLoad;
    this->cursor = 0;
}