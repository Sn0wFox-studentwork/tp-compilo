#include "MultExpression.h"
#include "Expression.h"

#include <string>
#include <sstream>
using namespace std;

MultExpression::MultExpression(int var1, int var2): Expression() {
    variables[1] = var1;
    variables[2] = var2;
}

MultExpression::~MultExpression() {
    // Nothing to do for the moment
}

string MultExpression::toString() const {
    ostringstream ss;
    ss << variables[1];
    ss << " * ";
    ss << variables[2];
    return ss.str();
}

int MultExpression::eval() const {
    // Just return the computed product of the two terms
    return variables[1] * variables[2];
}