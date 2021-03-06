#include "Etat.h"
#include "E0.h"
#include "E1.h"
#include "E2.h"
#include "E3.h"
#include "../symbols/Symbol.h"
#include "../Automate.h"
#include "../Token.enum.h"

#include <iostream>
using namespace std;

E0 :: E0() : Etat() {
    // Nothing else to do
}

E0 :: ~E0() {
    // Nothing to do for the moment
}

bool E0 :: transition(Automate & automate, Symbol * s) {
#ifdef DEBUG
    cout << "E0 :: transition" << endl;
    cout << "E0 :: param :: *s :: " << *s << endl;
#endif
	switch(*s) {
        case OPEN:
            automate.decalage(s, new E2);
            automate.readMore();
            break;
        //case EOL:
        case EXPR:
            automate.decalage(s, new E1);
            break;
        case VAL:
            automate.decalage(s , new E3);
            automate.readMore();
            break;
        default:
            // Syntax error
            cerr << "E0 :: syntax error" << endl;
            return true;
    }
    return false;
}
