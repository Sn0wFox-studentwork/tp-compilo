#include "Etat.h"
#include "E2.h"
#include "E3.h"
#include "E4.h"
#include "E7.h"
#include "../symbols/Symbol.h"
#include "../Automate.h"
#include "../Token.enum.h"

#include <iostream>
using namespace std;

E4 :: E4() : Etat() {
    // Nothing else to do
}

E4 :: ~E4() {
    // Nothing to do for the moment
}

bool E4 :: transition(Automate & automate, Symbol * s) {
#ifdef DEBUG
    cout << "E4 :: transition" << endl;
    cout << "E4 :: param :: *s :: " << *s << endl;
#endif
    switch(*s) {
        case EXPR:
            automate.decalage(s, new E7);
            break;
        case VAL:
            automate.decalage(s, new E3);
            automate.readMore();
            break;
        case OPEN:
            automate.decalage(s, new E2);
            automate.readMore();
            break;
        default:
            // Syntax error
            cerr << "E4 :: syntax error" << endl;
            return true;
    }
    return false;
}
