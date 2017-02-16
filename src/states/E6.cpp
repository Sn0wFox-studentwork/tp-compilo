#include <stdarg.h>
#include "Etat.h"
#include "Symbole.h"
#include "E9.ccp"
#include "E5.ccp"
#include "E4.ccp"

bool E6 :: transition( Automate & automate, Symbole * s) {
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
