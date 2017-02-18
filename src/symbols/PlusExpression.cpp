#include "PlusExpression.h"
#include "Expression.h"

#include <string>
#include <sstream>
using namespace std;

PlusExpression::PlusExpression(int var1, int var2): Expression() {
    variables[1] = var1;
    variables[2] = var2;
}

PlusExpression::~PlusExpression() {
    // Nothing to do for the moment
}

string PlusExpression::toString() const {
    ostringstream ss;
    ss << variables[1];
    ss << " + ";
    ss << variables[2];
    return ss.str();
}

int PlusExpression::eval() const {
    // Just return the computed sum of the two terms
    return variables[1] + variables[2];
}