#include "Plus.h"
#include "Symbole.h"
#include "../token.enum.h"

#include <string>
using namespace std;

Plus::Plus() : Symbole(PLUS) {
    // Nothing else to do
}

Plus::~Plus() {
    // Nothing to do for the moment
}

std::string Plus::toString() const {
    return "+";
}
