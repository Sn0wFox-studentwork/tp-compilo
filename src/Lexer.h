#ifndef TP_COMPILO_LEXER_H
#define TP_COMPILO_LEXER_H

#include <stack>
#include <string>
#include "symbols/Symbol.h"

/**
 * A lexical analyzer.
 */
class Lexer {
public:
    /**
     * Constructor.
     * @param toRead The string to analyze.
     */
    Lexer(std::string& toRead);

    /**
     * Destructor.
     */
    ~Lexer();

    /**
     * Analyse a string.
     * If moveHead is set to true, consumes the current character.
     * @param moveHead Whether or not the current character should be consumed.
     * @return A pointer to the read symbol.
     */
    Symbol* readSymbol(bool moveHead = true);

    /**
     * Get the string to analyze.
     * @return The string to analyze.
     */
    inline std::string getString() const {
        return this->toRead;
    }

    /**
     * Set the string to analyze.
     * The previous string will be erased.
     * Reset the cursor position (0).
     * @param toLoad The new string to analyze.
     */
    void load(std::string toLoad);

protected:
    /**
     * The stack of symbols already analyzed.
     */
    std::stack<Symbol*> stack;

    /**
     * The string to analyze.
     */
    std::string toRead;

    /**
     * The current position in the string to analyze.
     */
    std::size_t cursor;
};


#endif //TP_COMPILO_LEXER_H
