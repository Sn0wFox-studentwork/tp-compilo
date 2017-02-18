#include "Close.h"
#include "Symbol.h"
#include "../Token.enum.h"

#include <string>
using namespace std;

Close::Close() : Symbol(CLOSE) {
    // Nothing else to do
}

Close::~Close() {
    // Nothing to do for the moment
}

std::string Close::toString() const {
    return ")";
}
