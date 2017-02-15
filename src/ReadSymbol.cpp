#include "ReadSymbol.h"
#include "Symbole.h"

#include <string>

using namespace std;

ReadSymbol::ReadSymbol(int id, string character) : Symbole(id), read(character) {
    // Nothing else to do
}

ReadSymbol::~ReadSymbol() {
    // Nothing else to do
}

string ReadSymbol::getCharacter() {
    return this->read;
}