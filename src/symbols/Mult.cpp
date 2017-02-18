#include "Mult.h"
#include "Symbole.h"
#include "../token.enum.h"

#include <string>
using namespace std;

Mult::Mult() : Symbole(MULT) {
    // Nothing else to do
}

Mult::~Mult() {
    // Nothing to do for the moment
}

std::string Mult::toString() const {
    return "*";
}
