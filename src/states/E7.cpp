#include "Etat.h"
#include "E4.h"
#include "E5.h"
#include "E7.h"
#include "../Symbole.h"
#include "../Automate.h"
#include "../token.enum.h"

E7 :: E7() : Etat() {
    // Nothing else to do
}

E7 :: ~E7() {
    // Nothing to do for the moment
}

bool E7 :: transition( Automate & automate, Symbole * s) {
    // TODO: what if it has nothing else to read ?
    switch(*s) {
        case MULT:
            automate.decalage(s, new E5);
            break;
        case PLUS:
            automate.decalage(s, new E4);
            break;
    }
    return false;
}
