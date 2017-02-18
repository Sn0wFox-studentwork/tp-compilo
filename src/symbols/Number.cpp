#include "Number.h"
#include "Expression.h"
#include "../token.enum.h"

#include <string>
#include <sstream>
using namespace std;

Number::Number(int val): Expression(), value(val) {
    ident = VAL;
}

Number::~Number() {
    // Nothing to do for the moment
}

string Number::toString() const {
    ostringstream ss;
    ss << value;
    return ss.str();
}

int Number::eval() const {
    return value;
}

void Number::mutateToExpression() {
    this->ident = EXPR;
}