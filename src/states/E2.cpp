#include "Etat.h"
#include "E2.h"
#include "E3.h"
#include "E6.h"
#include "../symbols/Symbole.h"
#include "../Automate.h"
#include "../token.enum.h"

E2 :: E2() : Etat() {
    // Nothing else to do
}

E2 :: ~E2() {
    // Nothing to do for the moment
}

bool E2 :: transition(Automate & automate, Symbole * s) {
	switch(*s) {
        case VAL:
            automate.decalage(s, new E3);
            break;
        case EXPR:
            automate.decalage(s, new E6);
            break;
        case OPEN:
            automate.decalage(s, new E2);
            break;
    }
    return false;
}
