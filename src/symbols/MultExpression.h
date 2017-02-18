#ifndef TP_COMPILO_MULTEXPRESSION_H
#define TP_COMPILO_MULTEXPRESSION_H

#include <string>
#include "Expression.h"

/**
 * A multiplication expression that can be
 * found in the subject grammar.
 */
class MultExpression : public Expression {
public:
    /**
     * Constructor.
     * @param var1 The first term of the multiplication.
     * @param var2 The second term of the multiplication.
     */
    MultExpression(int var1, int var2);

    /**
     * Destructor.
     */
    ~MultExpression();

    /**
     * Evaluate the expression.
     * @return A number, result of the multiplication.
     */
    int eval() const;

    /**
     * Transform the expression into a string.
     * @return The expression as a string.
     */
    std::string toString() const;

protected:
    /**
     * An array of two integers representing the two terms of the multiplication.
     */
    int variables[2];
};


#endif //TP_COMPILO_MULTEXPRESSION_H
