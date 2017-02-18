#include "Etat.h"
#include "E2.h"
#include "E3.h"
#include "E6.h"
#include "../symbols/Symbol.h"
#include "../Automate.h"
#include "../token.enum.h"

#include <iostream>
using namespace std;

E2 :: E2() : Etat() {
    // Nothing else to do
}

E2 :: ~E2() {
    // Nothing to do for the moment
}

bool E2 :: transition(Automate & automate, Symbol * s) {
    cout << "E2 :: transition" << endl;
    cout << "E2 :: param :: *s :: " << *s << endl;
	switch(*s) {
        case VAL:
            cout << "E2 :: transition :: VAL" << endl;
            automate.decalage(s, new E3);
            automate.readMore();
            break;
        case EXPR:
            cout << "E2 :: transition :: EXPR" << endl;
            automate.decalage(s, new E6);
            break;
        case OPEN:
            cout << "E2 :: transition :: OPEN" << endl;
            automate.decalage(s, new E2);
            automate.readMore();
            break;
        default:
            // Syntax error
            cerr << "E2 :: syntax error" << endl;
            return true;
    }
    return false;
}
