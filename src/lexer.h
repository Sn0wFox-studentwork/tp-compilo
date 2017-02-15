#ifndef TP_COMPILO_LEXER_H
#define TP_COMPILO_LEXER_H

#include <stack>
#include <string>
#include "ReadSymbol.h"

class Lexer {
public:
    // Constructor / Destructor
    Lexer(std::string& toRead);
    ~Lexer();

    // Analyse a string
    ReadSymbol readSymbol();

protected:
    std::stack<ReadSymbol> stack;
    std::string toRead;
    int cursor;
};


#endif //TP_COMPILO_LEXER_H
