#ifndef TP_COMPILO_AUTOMATE_H
#define TP_COMPILO_AUTOMATE_H

#include "symbols/Symbol.h"
#include "states/Etat.h"
#include "Lexer.h"
#include <stack>
#include <string>

#include "symbols/Symbol.h"

class Etat;

class Automate {
public:
    Automate(std::string toRead);
    ~Automate();

    void decalage(Symbol* s, Etat* e);
    void reduction(int n, Symbol* s);
    void readMore();
    Symbol* pop();
    void run();

protected:
    std::stack<Etat*> statesStack;
    std::stack<Symbol*> symbolsStack;
    Lexer lexer;
};


#endif //TP_COMPILO_AUTOMATE_H
