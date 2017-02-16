#include "Etat.h"
#include "E2.h"
#include "E3.h"
#include "E4.h"
#include "E7.h"
#include "../Symbole.h"
#include "../Automate.h"
#include "../token.enum.h"

E4 :: E4() : Etat() {
    // Nothing else to do
}

E4 :: ~E4() {
    // Nothing to do for the moment
}

bool E4 :: transition(Automate & automate, Symbole * s) {
    switch(*s) {
        case EXPR:
            automate.decalage(s, new E7);
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
