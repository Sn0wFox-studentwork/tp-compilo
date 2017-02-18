#include "E9.h"
#include "../symbols/Symbol.h"
#include "../Automate.h"

E9 :: E9() : Etat() {
    // Nothing else to do
}

E9 :: ~E9() {
    // Nothing to do for the moment
}

bool E9 :: transition(Automate & automate, Symbol * s) {
    // TODO: not sure about this one
    return true;
}
