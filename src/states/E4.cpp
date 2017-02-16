#include "Etat.h"
#include "Symbole.h"
#include "E7.ccp"
#include "E3.ccp"
#include "E2.ccp"

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
