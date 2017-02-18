#include "Symbol.h"

#include <string>
#include <sstream>
#include <ostream>
using namespace std;

Symbol::Symbol(int id) : ident(id) {
    // Nothing else to do
}

Symbol::~Symbol() {
    // Nothing to do for the moment
}

string Symbol::toString() const {
    ostringstream ss;
    ss << this->ident;
    return ss.str();
}

ostream& operator<<(std::ostream& ofs, const Symbol& s) {
    ofs << s.toString();
    return ofs;
}