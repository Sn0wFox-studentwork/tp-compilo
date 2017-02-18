#ifndef TP_COMPILO_PLUSEXPRESSION_H
#define TP_COMPILO_PLUSEXPRESSION_H

#include <string>
#include "Expression.h"

/**
 * A sum expression that can be
 * found in the subject grammar.
 */
class PlusExpression : public Expression {
public:
    /**
     * Constructor.
     * @param var1 The first term of the sum.
     * @param var2 The second term of the sum.
     */
    PlusExpression(int var1, int var2);

    /**
     * Destructor.
     */
    ~PlusExpression();

    /**
     * Evaluate the expression.
     * @return A number, result of the sum.
     */
    int eval() const;

    /**
     * Transform the expression into a string.
     * @return The expression as a string.
     */
    std::string toString() const;

protected:
    /**
     * An array of two integers representing the two terms of the sum.
     */
    int variables[2];
};


#endif //TP_COMPILO_PLUSEXPRESSION_H
