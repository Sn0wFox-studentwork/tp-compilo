#include "Plus.h"
#include "Symbol.h"
#include "../Token.enum.h"

#include <string>
using namespace std;

Plus::Plus() : Symbol(PLUS) {
    // Nothing else to do
}

Plus::~Plus() {
    // Nothing to do for the moment
}

std::string Plus::toString() const {
    return "+";
}
