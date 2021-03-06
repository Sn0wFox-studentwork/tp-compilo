#include "Etat.h"
#include "E3.h"
#include "../symbols/Symbol.h"
#include "../symbols/Expression.h"
#include "../symbols/Number.h"
#include "../Automate.h"
#include "../Token.enum.h"

#include <iostream>
using namespace std;

E3 :: E3() : Etat() {
    // Nothing else to do
}

E3 :: ~E3() {
    // Nothing to do for the moment
}

bool E3 :: transition(Automate & automate, Symbol * s) {
#ifdef DEBUG
    cout << "E3 :: transition" << endl;
    cout << "E3 :: param :: *s :: " << *s << endl;
#endif
    Symbol* value;
    Number* n;
    switch(*s) {
        case PLUS:
        case MULT:
        case EOL:
        case CLOSE:
            value = automate.pop();
            n = dynamic_cast<Number*>(value);
            if(n) {
                n->mutateToExpression();
                automate.reduction(1, n);
                return false;
            }
            // Wow, that's not supposed to be possible
            cerr << "E3 :: BIG ERROR: LAST SYMBOL WASN'T A NUMBER" << endl;
            // Let's go to the default case
        default:
            // Syntax error
            cerr << "E3 :: syntax error" << endl;
            return true;
    }
}
