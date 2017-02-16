#include "Etat.h"
#include "E1.h"
#include "E4.h"
#include "E5.h"
#include "../Symbole.h"
#include "../Automate.h"
#include "../token.enum.h"

E1 :: E1() : Etat() {
    // Nothing else to do
}

E1 :: ~E1() {
    // Nothing to do for the moment
}

bool E1 :: transition(Automate & automate, Symbole * s) {
	switch(*s) {
        case PLUS:
            automate.decalage(s, new E4);
            break;
        case MULT:
            automate.decalage(s, new E5);
            break;
    }
    return false;
}
