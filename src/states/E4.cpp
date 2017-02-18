#include "Etat.h"
#include "E2.h"
#include "E3.h"
#include "E4.h"
#include "E7.h"
#include "../symbols/Symbol.h"
#include "../Automate.h"
#include "../token.enum.h"

#include <iostream>
using namespace std;

E4 :: E4() : Etat() {
    // Nothing else to do
}

E4 :: ~E4() {
    // Nothing to do for the moment
}

bool E4 :: transition(Automate & automate, Symbol * s) {
    cout << "E4 :: transition" << endl;
    cout << "E4 :: param :: *s :: " << *s << endl;
    switch(*s) {
        case EXPR:
            cout << "E4 :: transition :: EXPR" << endl;
            automate.decalage(s, new E7);
            automate.readMore();
            break;
        case VAL:
            cout << "E4 :: transition :: VAL" << endl;
            automate.decalage(s, new E3);
            automate.readMore();
            break;
        case OPEN:
            cout << "E4 :: transition :: OPEN" << endl;
            automate.decalage(s, new E2);
            automate.readMore();
            break;
        default:
            // Syntax error
            cout << "E4 :: syntax error" << endl;
            return true;
    }
    return false;
}
