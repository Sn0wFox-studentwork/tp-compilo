#include <iostream>
#include "Automate.h"
#include "token.enum.h"
#include "ReadSymbol.h"

using namespace std;

int main() {
    // Get the string to analyse
    string s;
    getline(cin, s);

    ReadSymbol test(EXPR, "568");
    Symbole test2(EXPR);
    cout << test.toString() << endl;
    cout << test2.toString() << endl;

    // Analyse it
    Automate automate(s);
    automate.run();


//    ReadSymbol symbol = lexer.readSymbol();
//
//    while(symbol != EOL) {
//
//        // Treat symbol
//        cout << "Symbol read: " << symbol.getCharacter() << endl;
//        symbol = lexer.readSymbol();
//    }
//
//    cout << "End of line reached!" << endl;

    return 0;
}