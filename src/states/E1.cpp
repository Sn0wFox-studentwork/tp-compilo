#include "Etat.h"
#include "E1.h"
#include "E4.h"
#include "E5.h"
#include "../symbols/Symbol.h"
#include "../Automate.h"
#include "../token.enum.h"

#include <iostream>
using namespace std;

E1 :: E1() : Etat() {
    // Nothing else to do
}

E1 :: ~E1() {
    // Nothing to do for the moment
}

bool E1 :: transition(Automate & automate, Symbol * s) {
    cout << "E1 :: transition" << endl;
    cout << "E1 :: param :: *s :: " << *s << endl;
	switch(*s) {
        case PLUS:
            cout << "E1:: transition :: PLUS" << endl;
            automate.decalage(s, new E4);
            automate.readMore();
            break;
        case MULT:
            cout << "E1:: transition :: MULT" << endl;
            automate.decalage(s, new E5);
            automate.readMore();
            break;
        case EOL:
            // We've analysed the string ! Let's print the result
            cout << "E1 :: transition :: EOL" << endl;
            cout << "Result: " << *automate.pop() << endl;
            return true;
        default:
            // Syntax error
            cerr << "E1 :: syntax error" << endl;
            return true;
    }
    return false;
}
