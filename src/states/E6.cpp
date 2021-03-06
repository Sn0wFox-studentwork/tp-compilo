#include "Etat.h"
#include "E4.h"
#include "E5.h"
#include "E6.h"
#include "E9.h"
#include "../symbols/Symbol.h"
#include "../Automate.h"
#include "../Token.enum.h"

#include <iostream>
using namespace std;

E6 :: E6() : Etat() {
    // Nothing else to do
}

E6 :: ~E6() {
    // Nothing to do for the moment
}

bool E6 :: transition(Automate & automate, Symbol * s) {
#ifdef DEBUG
    cout << "E6 :: transition" << endl;
    cout << "E6 :: param :: *s :: " << *s << endl;
#endif
    switch(*s) {
        case CLOSE:
            automate.decalage(s, new E9);
            automate.readMore();
            break;
        case MULT:
            automate.decalage(s, new E5);
            automate.readMore();
            break;
        case PLUS:
            automate.decalage(s, new E4);
            automate.readMore();
            break;
        default:
            // Syntax error
            cerr << "E6 :: syntax error" << endl;
            return true;
    }
    return false;
}
