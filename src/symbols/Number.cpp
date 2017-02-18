#include "Number.h"
#include "Expression.h"

#include <string>
#include <sstream>
using namespace std;

Number::Number(int val): Expression(), value(val) {
    // Nothing else to do
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