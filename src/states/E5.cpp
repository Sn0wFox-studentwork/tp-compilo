#include "Etat.h"
#include "E2.h"
#include "E3.h"
#include "E5.h"
#include "E8.h"
#include "../Symbole.h"
#include "../Automate.h"
#include "../token.enum.h"

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
