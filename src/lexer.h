#ifndef TP_COMPILO_LEXER_H
#define TP_COMPILO_LEXER_H

#include <stack>
#include <string>
#include "symbols/Symbol.h"

class Lexer {
public:
    // Constructor / Destructor
    Lexer(std::string& toRead);
    ~Lexer();

    // Analyse a string
    // If moveHead is set to true, consumes the current character
    Symbol* readSymbol(bool moveHead = true);
    std::string getString() {
        return this->toRead;
    }
    void load(std::string toLoad) {
        this->toRead = toLoad;
    }

protected:
    std::stack<Symbol*> stack;
    std::string toRead;
    int cursor;
};


#endif //TP_COMPILO_LEXER_H
