#include <iostream>
#include <string>
#include "Automate.h"
#include "token.enum.h"
#include "symbols/ReadSymbol.h"

using namespace std;

void test(string& s);

int main() {
    // Get the string to analyse
    string s;
    getline(cin, s);

    // Analyse it
    Automate automate(s);
    automate.run();

    // test(s);

    return 0;
}

void test(string& s) {
    Lexer l(s);
    Symbol* symbol = l.readSymbol();

    while(*symbol != EOL) {

        // Treat symbol
        cout << "Symbol read: " << *symbol << endl;
        symbol = l.readSymbol(true);
    }

    cout << "End of line reached!" << endl;
}