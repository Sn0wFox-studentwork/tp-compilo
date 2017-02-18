#include "Etat.h"
#include "E2.h"
#include "E3.h"
#include "E5.h"
#include "E8.h"
#include "../symbols/Symbol.h"
#include "../Automate.h"
#include "../token.enum.h"

#include <iostream>
using namespace std;

E5 :: E5() : Etat() {
    // Nothing else to do
}

E5 :: ~E5() {
    // Nothing to do for the moment
}

bool E5 :: transition(Automate & automate, Symbol * s) {
    cout << "E5 :: transition" << endl;
    cout << "E5 :: param :: *s :: " << *s << endl;
    switch(*s) {
        case EXPR:
            cout << "E5 :: transition :: EXPR" << endl;
            automate.decalage(s, new E8);
            break;
        case VAL:
            cout << "E5 :: transition :: VAL" << endl;
            automate.decalage(s, new E3);
            automate.readMore();
            break;
        case OPEN:
            cout << "E5 :: transition :: OPEN" << endl;
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
