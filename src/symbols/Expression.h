#ifndef TP_COMPILO_EXPRESSION_H
#define TP_COMPILO_EXPRESSION_H

#include <string>
#include <vector>
#include "Symbol.h"

/**
 * A mathematical expression that can be
 * found in the subject grammar.
 */
class Expression : public Symbol {
public:
    /**
     * Constructor.
     */
    Expression();

    /**
     * Destructor.
     */
    virtual ~Expression();

    /**
     * Evaluate the expression.
     * @return A number, result of the expression.
     */
    virtual int eval() const = 0;

    /**
     * Transform the expression into a string.
     * @return The expression as a string.
     */
    virtual std::string toString() const;

    /**
     * << operator overload.
     * @param ofs The output stream.
     * @param s The expression to insert in the output stream.
     * @return The output stream with the expression inserted thanks to toString().
     */
    friend std::ostream& operator<<(std::ostream& ofs, const Expression& s);
};


#endif //TP_COMPILO_EXPRESSION_H
