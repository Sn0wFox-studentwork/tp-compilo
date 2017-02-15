#ifndef TP_COMPILO_LEXER_H
#define TP_COMPILO_LEXER_H

#include <stack>
#include <string>
#include "Symbole.h"

class Lexer {
public:
    // Constructor / Destructor
    Lexer(std::string& toRead);
    ~Lexer();

    // Analyse a string
    Symbole readSymbol();

protected:
    std::stack<Symbole> stack;
    std::string toRead;
    int cursor;
};


#endif //TP_COMPILO_LEXER_H
