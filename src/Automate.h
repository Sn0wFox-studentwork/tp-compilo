#ifndef TP_COMPILO_AUTOMATE_H
#define TP_COMPILO_AUTOMATE_H

#include "Symbole.h"
#include "states/Etat.h"
#include "lexer.h"
#include <stack>
#include <string>

class Etat;

class Automate {
public:
    Automate(std::string toRead);
    ~Automate();

    void decalage(Symbole* s, Etat* e);
    void reduction(int n, Symbole* s);

protected:
    std::stack<Etat*> statesStack;
    std::stack<Symbole*> symbolsStack;
    Lexer lexer;
};


#endif //TP_COMPILO_AUTOMATE_H
