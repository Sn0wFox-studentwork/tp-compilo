#include "Close.h"
#include "Symbole.h"
#include "../token.enum.h"

#include <string>
using namespace std;

Close::Close() : Symbole(CLOSE) {
    // Nothing else to do
}

Close::~Close() {
    // Nothing to do for the moment
}

std::string Close::toString() const {
    return ")";
}
