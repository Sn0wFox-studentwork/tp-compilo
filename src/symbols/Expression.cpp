#include "Expression.h"
#include "Symbol.h"
#include "../Token.enum.h"

#include <ostream>
using namespace std;

Expression::Expression() : Symbol(EXPR) {
    // Nothing else to do
}

Expression::~Expression() {
    // Nothing to do for the moment
}

std::string Expression::toString() const {
    return Symbol::toString();
}

ostream& operator<<(ostream& ofs, const Expression& s) {
    ofs << s.toString();
    return ofs;
}