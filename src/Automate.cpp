#include "Automate.h"
#include "symbols/Symbole.h"
#include "states/E0.h"
#include "states/Etat.h"

#include <iostream>

using namespace std;

Automate::Automate(string toRead) : statesStack(), symbolsStack(), lexer(toRead) {
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

void Automate::decalage(Symbole *s, Etat *e) {
    this->symbolsStack.push(s);
    this->statesStack.push(e);
}

bool Automate::reduction(int n, Symbole *s) {
    // TODO: understand how this is supposed to work
    for(int i = 0; i < n; i++) {
        delete this->statesStack.top();
        statesStack.pop();
    }
    return this->statesStack.top()->transition(*this, s);
}

void Automate::readMore() {
    this->lexer.readSymbol(true);
}

Symbole Automate::pop() {
    Symbole * top = this->symbolsStack.top();
    this->symbolsStack.pop();
    return *top;
}

void Automate::run() {
    cout << "RUN" << endl;
    cout << "String to analyse: " << this->lexer.getString() << endl;
    Etat* e;
    Symbole* s;
    do {
        e = this->statesStack.top();
        s = this->lexer.readSymbol(false);
    } while(!e->transition(*this, s));
    cout << "DONE" << endl;
}