#include "Etat.h"
#include "E2.h"
#include "E3.h"
#include "E5.h"
#include "E8.h"
#include "../symbols/Symbol.h"
#include "../Automate.h"
#include "../Token.enum.h"

#include <iostream>
using namespace std;

E5 :: E5() : Etat() {
    // Nothing else to do
}

E5 :: ~E5() {
    // Nothing to do for the moment
}

bool E5 :: transition(Automate & automate, Symbol * s) {
#ifdef DEBUG
    cout << "E5 :: transition" << endl;
    cout << "E5 :: param :: *s :: " << *s << endl;
#endif
        switch(*s) {
        case EXPR:
            automate.decalage(s, new E8);
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
            cerr << "E5 :: syntax error" << endl;
            return true;
        }
    return false;
}
