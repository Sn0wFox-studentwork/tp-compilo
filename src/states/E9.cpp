#include "Etat.h"
#include "E9.h"
#include "../symbols/Symbol.h"
#include "../symbols/Expression.h"
#include "../symbols/Number.h"
#include "../Automate.h"
#include "../token.enum.h"

#include <iostream>
using namespace std;

E9 :: E9() : Etat() {
    // Nothing else to do
}

E9 :: ~E9() {
    // Nothing to do for the moment
}

bool E9 :: transition(Automate & automate, Symbol * s) {
    cout << "E9 :: transition" << endl;
    cout << "E9 :: param :: *s :: " << *s << endl;
    Symbol* value;
    Expression* e;
    switch(*s) {
        case MULT:
        case PLUS:
        case CLOSE:
        case EOL:
            automate.pop();
            value = automate.pop();
            automate.pop();
            e = dynamic_cast<Expression*>(value);
            cout << "E9 :: transition :: reduction" << endl;
            if(e) {
                Number* n = new Number(e->eval());
                n->mutateToExpression();
                automate.reduction(3, n);
                return false;
            }
            // Wow, that's not supposed to be possible
            cerr << "E9 :: BIG ERROR: LAST SYMBOLS WERE NOT A PARENTHESIZED EXPRESSION" << endl;
            // Let's go to the default case
        default:
            // Syntax error
            cout << "E9 :: syntax error" << endl;
            return true;
    }
}
