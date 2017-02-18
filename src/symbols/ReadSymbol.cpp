#include "ReadSymbol.h"
#include "Symbol.h"

#include <string>
using namespace std;

ReadSymbol::ReadSymbol(int id, string character) : Symbol(id), read(character) {
    // Nothing else to do
}

ReadSymbol::~ReadSymbol() {
    // Nothing else to do
}

string ReadSymbol::getCharacter() {
    return this->read;
}

string ReadSymbol::toString() {
    return this->getCharacter();
}