#include "Automate.h"
#include "symbols/Symbol.h"
#include "states/E0.h"
#include "states/Etat.h"

#include <iostream>
using namespace std;

Automate::Automate(string toRead) : statesStack(), symbolsStack(), lexer(toRead) {
    // First state must be a 0
    this->statesStack.push(new E0);
}

Automate::~Automate() {
    // In case that stacks are not empty,
    // we must clean them
    while(!statesStack.empty()) {
        delete statesStack.top();
        statesStack.pop();
    }
    while(!symbolsStack.empty()) {
        delete symbolsStack.top();
        symbolsStack.pop();
    }
}

void Automate::decalage(Symbol *s, Etat *e) {
    this->symbolsStack.push(s);
    this->statesStack.push(e);
}

void Automate::reduction(int n, Symbol *s) {
    // Reduce n states
    for(int i = 0; i < n; i++) {
        delete this->statesStack.top();
        statesStack.pop();
    }
    // Perform next transition
    this->statesStack.top()->transition(*this, s);
}

void Automate::readMore() {
    this->lexer.readSymbol(true);
}

Symbol* Automate::pop() {
    Symbol * top = this->symbolsStack.top();
    this->symbolsStack.pop();
    return top;
}

void Automate::run() {
#ifdef DEBUG
    cout << "RUN" << endl;
    cout << "String to analyse: " << this->lexer.getString() << endl;
#endif
    Etat* e;
    Symbol* s;
    do {
        // Until done, progress through states
        e = this->statesStack.top();
        s = this->lexer.readSymbol(false);
    } while(!e->transition(*this, s));
#ifdef DEBUG
    cout << "DONE" << endl;
#endif
}