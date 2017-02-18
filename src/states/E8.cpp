#include "Etat.h"
#include "E8.h"
#include "../symbols/Symbol.h"
#include "../symbols/MultExpression.h"
#include "../symbols/Number.h"
#include "../Automate.h"
#include "../Token.enum.h"

#include <iostream>
using namespace std;

E8 :: E8() : Etat() {
    // Nothing else to do
}

E8 :: ~E8() {
    // Nothing to do for the moment
}

bool E8 :: transition(Automate & automate, Symbol * s) {
#ifdef DEBUG
    cout << "E8 :: transition" << endl;
    cout << "E8 :: param :: *s :: " << *s << endl;
#endif
    Symbol* value1;
    Symbol* value2;
    Number* n1;
    Number* n2;
    switch(*s) {
        case MULT:
        case PLUS:
        case CLOSE:
        case EOL:
            value1 = automate.pop();
            automate.pop();
            value2 = automate.pop();
            n1 = dynamic_cast<Number *>(value1);
            n2 = dynamic_cast<Number *>(value2);
            if(n1 && n2) {
                MultExpression n(n1->eval(), n2->eval());
                Number* result = new Number(n.eval());
                result->mutateToExpression();
                automate.reduction(3, result);
                return false;
            }
            // Wow, that's not supposed to be possible
            cerr << "E8 :: BIG ERROR: LAST SYMBOLS WERE NOT A MULT EXPRESSION" << endl;
            // Let's go to the default case
        default:
            // Syntax error
            cerr << "E8 :: syntax error" << endl;
            return true;
    }
}
