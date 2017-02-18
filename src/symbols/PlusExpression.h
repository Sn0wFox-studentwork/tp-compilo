#ifndef TP_COMPILO_PLUSEXPRESSION_H
#define TP_COMPILO_PLUSEXPRESSION_H

#include <string>
#include "Expression.h"

class PlusExpression : Expression {
public:
    PlusExpression(int var1, int var2);
    ~PlusExpression();
    int eval() const;
    std::string toString() const;

protected:
    int variables[2];
};


#endif //TP_COMPILO_PLUSEXPRESSION_H
