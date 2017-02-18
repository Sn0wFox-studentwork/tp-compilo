#include "Expression.h"
#include "Symbole.h"
#include "../token.enum.h"

Expression::Expression() : Symbole(EXPR) {
    // Nothing else to do
}

Expression::~Expression() {
    // Nothing to do for the moment
}

std::string Expression::toString() const {
    return Symbole::toString();
}