#include "Eol.h"
#include "Symbol.h"
#include "../token.enum.h"

#include <string>
using namespace std;

Eol::Eol() : Symbol(EOL) {
    // Nothing else to do
}

Eol::~Eol() {
    // Nothing to do for the moment
}

std::string Eol::toString() const {
    return "$";
}
