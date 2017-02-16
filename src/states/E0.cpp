#include "Etat.h"
#include "E0.h"
#include "E1.h"
#include "E2.h"
#include "E3.h"
#include "../Symbole.h"
#include "../Automate.h"
#include "../token.enum.h"

E0 :: E0() : Etat() {
    // Nothing else to do
}

E0 :: ~E0() {
    // Nothing to do for the moment
}

bool E0 :: transition(Automate & automate, Symbole * s) {
	switch(*s) {
        case OPEN:
          automate.decalage(s, new E2);
          break;
        case EXPR:
          automate.decalage(s, new E1);
          break;
        case VAL:
          automate.decalage(s , new E3);
          break;
    }
    return false;
}
