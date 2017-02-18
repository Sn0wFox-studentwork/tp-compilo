#include "Etat.h"
#include "E2.h"
#include "E3.h"
#include "E5.h"
#include "E8.h"
#include "../symbols/Symbole.h"
#include "../Automate.h"
#include "../token.enum.h"

E5 :: E5() : Etat() {
    // Nothing else to do
}

E5 :: ~E5() {
    // Nothing to do for the moment
}

bool E5 :: transition(Automate & automate, Symbole * s) {
    switch(*s) {
        case EXPR:
            automate.decalage(s, new E8);
            break;
        case VAL:
            automate.decalage(s, new E3);
            break;
        case OPEN:
            automate.decalage(s, new E2);
            break;
        }
    return false;
}
