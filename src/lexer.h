#ifndef TP_COMPILO_LEXER_H
#define TP_COMPILO_LEXER_H

#include <stack>
#include "Symbole.h"

class Lexer {
public:
    // Constructor / Destructor
    Lexer();
    ~Lexer();

    // Read a symbol
    Symbole readSymbole();

protected:
    std::stack<Symbole> stack;
};


#endif //TP_COMPILO_LEXER_H
