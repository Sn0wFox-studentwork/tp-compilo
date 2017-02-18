#include "Etat.h"
#include "E3.h"
#include "../symbols/Symbole.h"
#include "../Automate.h"
#include "../token.enum.h"

#include <iostream>
using namespace std;

E3 :: E3() : Etat() {
    // Nothing else to do
}

E3 :: ~E3() {
    // Nothing to do for the moment
}

bool E3 :: transition(Automate & automate, Symbole * s) {
    cout << "E3 :: transition" << endl;
    Symbole value(EXPR);
    switch(*s) {
        case PLUS:
        case MULT:
        case EOL:
        case CLOSE:
            cout << "E3 :: transition :: reduction" << endl;
            value = automate.pop();
            return automate.reduction(1, &value);
        default:
            // Syntax error
            cerr << "E3 :: syntax error" << endl;
            return true;
    }
}
