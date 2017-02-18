#include "Open.h"
#include "Symbol.h"
#include "../token.enum.h"

#include <string>
using namespace std;

Open::Open() : Symbol(OPEN) {
    // Nothing else to do
}

Open::~Open() {
    // Nothing to do for the moment
}

std::string Open::toString() const {
    return "(";
}
