#include <iostream>
#include "lexer.h"
#include "token.enum.h"
#include "ReadSymbol.h"

using namespace std;

int main() {
    string s;
    getline(cin, s);

    Lexer lexer(s);
    ReadSymbol symbol = lexer.readSymbol();

    while(symbol != EOL) {

        // Treat symbol
        cout << "Symbol read: " << symbol.getCharacter() << endl;
        symbol = lexer.readSymbol();
    }

    cout << "End of line reached!" << endl;

    return 0;
}