#include "Etat.h"
#include "Symbole.h"
#include "E8.ccp"
#include "E3.ccp"
#include "E2.ccp"

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
