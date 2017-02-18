#include "Etat.h"
#include "E0.h"
#include "E1.h"
#include "E2.h"
#include "E3.h"
#include "../Symbole.h"
#include "../Automate.h"
#include "../token.enum.h"

#include <iostream>
using namespace std;

E0 :: E0() : Etat() {
    // Nothing else to do
}

E0 :: ~E0() {
    // Nothing to do for the moment
}

bool E0 :: transition(Automate & automate, Symbole * s) {
    cout << "E0 :: transition" << endl;
    cout << "E0 :: param :: *s :: " << *s << endl;
	switch(*s) {
        case OPEN:
            cout << "E0 :: transition :: OPEN" << endl;
            automate.decalage(s, new E2);
            automate.readMore();
            break;
        case EOL:
        case EXPR:
            cout << "E0 :: transition :: EXPR" << endl;
            automate.decalage(s, new E1);
            break;
        case VAL:
            cout << "E0 :: transition :: VAL" << endl;
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
