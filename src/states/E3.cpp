#include "Etat.h"
#include "E3.h"
#include "../Symbole.h"
#include "../Automate.h"

E3 :: E3() : Etat() {
    // Nothing else to do
}

E3 :: ~E3() {
    // Nothing to do for the moment
}

bool E3 :: transition(Automate & automate, Symbole * s) {
    // TODO: not sure about this one
    return true;
}
