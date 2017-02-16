#include "E9.h"
#include "../Symbole.h"
#include "../Automate.h"

E9 :: E9() : Etat() {
    // Nothing else to do
}

E9 :: ~E9() {
    // Nothing to do for the moment
}

bool E9 :: transition( Automate & automate, Symbole * s) {
    // TODO: not sure about this one
    return true;
}
