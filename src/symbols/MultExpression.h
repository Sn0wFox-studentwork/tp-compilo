#ifndef TP_COMPILO_MULTEXPRESSION_H
#define TP_COMPILO_MULTEXPRESSION_H

#include <string>
#include "Expression.h"

class MultExpression : Expression {
public:
    MultExpression(int var1, int var2);
    ~MultExpression();
    int eval() const;
    std::string toString() const;

protected:
    int variables[2];
};


#endif //TP_COMPILO_MULTEXPRESSION_H
