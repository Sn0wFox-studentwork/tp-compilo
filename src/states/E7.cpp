#include "Etat.h"
#include "E4.h"
#include "E5.h"
#include "E7.h"
#include "../symbols/Symbol.h"
#include "../symbols/Number.h"
#include "../symbols/PlusExpression.h"
#include "../Automate.h"
#include "../token.enum.h"

#include <iostream>
using namespace std;

E7 :: E7() : Etat() {
    // Nothing else to do
}

E7 :: ~E7() {
    // Nothing to do for the moment
}

bool E7 :: transition(Automate & automate, Symbol * s) {
    cout << "E7 :: transition" << endl;
    cout << "E7 :: param :: *s :: " << *s << endl;
    Symbol* value1;
    Symbol* value2;
    Number* n1;
    Number* n2;
    switch(*s) {
        case MULT:
            cout << "E7 :: transition :: MULT" << endl;
            automate.decalage(s, new E5);
            automate.readMore();
            break;
        case PLUS:
        case CLOSE:
        case EOL:
            cout << "E7 :: transition :: PLUS | CLOSE | EOL" << endl;
            value1 = automate.pop();
            automate.pop();
            value2 = automate.pop();
            n1 = dynamic_cast<Number *>(value1);
            n2 = dynamic_cast<Number *>(value2);
            if(n1 && n2) {
                PlusExpression n(n1->eval(), n2->eval());
                Number* result = new Number(n.eval());
                result->mutateToExpression();
                automate.reduction(3, result);
                return false;
            }
            // Wow, that's not supposed to be possible
            cerr << "E7 :: BIG ERROR: LAST SYMBOLS WERE NOT A PLUS EXPRESSION" << endl;
            // Let's go to the default case
        default:
            // Syntax error
            cout << "E7 :: syntax error" << endl;
            return true;
    }
}
