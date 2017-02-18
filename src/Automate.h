#ifndef TP_COMPILO_AUTOMATE_H
#define TP_COMPILO_AUTOMATE_H

#include "Symbole.h"
#include "states/Etat.h"
#include "lexer.h"
#include <stack>
#include <string>

#include "Symbole.h"

class Etat;

class Automate {
public:
    Automate(std::string toRead);
    ~Automate();

    void decalage(Symbole* s, Etat* e);
    bool reduction(int n, Symbole* s);
    void readMore();
    Symbole pop();
    void run();

protected:
    std::stack<Etat*> statesStack;
    std::stack<Symbole*> symbolsStack;
    Lexer lexer;
};


#endif //TP_COMPILO_AUTOMATE_H
