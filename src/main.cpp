#include <iostream>
#include "lexer.h"
#include "token.enum.h"

using namespace std;

int main() {
    string s;
    getline(cin, s);

    Lexer lexer(s);
    Symbole symbol = lexer.readSymbol();

    while(symbol != EOL) {
        // Treat symbol
        cout << "Symbol read: " << symbol << endl;
        symbol = lexer.readSymbol();
    }

    cout << "End of line reached!" << endl;

    return 0;
}