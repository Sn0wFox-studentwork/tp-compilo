#include "Symbole.h"

#include <string>
#include <sstream>
using namespace std;

Symbole::Symbole(int id) : ident(id) {
    // Nothing else to do
}

Symbole::~Symbole() {
    // Nothing to do for the moment
}

string Symbole::toString() const {
    ostringstream ss;
    ss << this->ident;
    return ss.str();
}