#ifndef TP_COMPILO_AUTOMATE_H
#define TP_COMPILO_AUTOMATE_H

#include "symbols/Symbol.h"
#include "states/Etat.h"
#include "Lexer.h"
#include <stack>
#include <string>

#include "symbols/Symbol.h"

class Etat;

/**
 * The state machine which able to analyze
 * the given grammar.
 */
class Automate {
public:
    /**
     * Constructor.
     * @param toRead The string to analyze.
     */
    Automate(std::string toRead);

    /**
     * Destructor.
     */
    ~Automate();

    /**
     * Stack the given state and the given symbol.
     * @param s The symbol to stack.
     * @param e The state to stack.
     */
    void decalage(Symbol* s, Etat* e);

    /**
     * Perform a reduction of n states,
     * and activate the next transition
     * (from the top level state on the stack).
     * @param n The number of states to unstack.
     * @param s The symbol with which perform the next transition.
     */
    void reduction(int n, Symbol* s);

    /**
     * Move the lexical analyzer's reading head forward.
     */
    void readMore() const;

    /**
     * Unstack the top level symbol and returns it.
     * @return The top level symbol.
     */
    Symbol* pop();

    /**
     * Perform the analyze.
     */
    void run();

protected:
    /**
     * The stack of states not reduced yet.
     */
    std::stack<Etat*> statesStack;

    /**
     * The stack of analyzed symbols.
     */
    std::stack<Symbol*> symbolsStack;

    /**
     * The lexical analyzer.
     */
    Lexer lexer;
};


#endif //TP_COMPILO_AUTOMATE_H
