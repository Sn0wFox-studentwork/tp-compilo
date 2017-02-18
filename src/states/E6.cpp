#include "Etat.h"
#include "E4.h"
#include "E5.h"
#include "E6.h"
#include "E9.h"
#include "../symbols/Symbol.h"
#include "../Automate.h"
#include "../token.enum.h"

E6 :: E6() : Etat() {
    // Nothing else to do
}

E6 :: ~E6() {
    // Nothing to do for the moment
}

bool E6 :: transition(Automate & automate, Symbol * s) {
    switch(*s) {
        case OPEN:
            automate.decalage(s, new E9);
            break;
        case MULT:
            automate.decalage(s, new E5);
            break;
        case PLUS:
            automate.decalage(s, new E4);
            break;
    }
    return false;
}
