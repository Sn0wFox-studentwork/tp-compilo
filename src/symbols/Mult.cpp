#include "Mult.h"
#include "Symbol.h"
#include "../Token.enum.h"

#include <string>
using namespace std;

Mult::Mult() : Symbol(MULT) {
    // Nothing else to do
}

Mult::~Mult() {
    // Nothing to do for the moment
}

std::string Mult::toString() const {
    return "*";
}
