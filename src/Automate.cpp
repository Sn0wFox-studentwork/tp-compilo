#include "Automate.h"

using namespace std;

Automate::Automate(string toRead) : statesStack(), symbolsStack(), lexer(toRead) {
    // Nothing else to do
}

Automate::~Automate() {
    // In case that stacks are not empty,
    // we must clean them

}

void Automate::decalage(Symbole *s, Etat *e) {
    this->symbolsStack.push(s);
    this->statesStack.push(e);
}

void Automate::reduction(int n, Symbole *s) {
    // TODO: understand how this is supposed to work
    for(int i = 0; i < n; i++) {
        delete this->statesStack.top();
        statesStack.pop();
    }
}