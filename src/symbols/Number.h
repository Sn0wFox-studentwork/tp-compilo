#ifndef TP_COMPILO_NUMBER_H
#define TP_COMPILO_NUMBER_H

#include <string>
#include "Expression.h"

class Number : public Expression {
public:
    Number(int value);
    ~Number();
    int eval() const;
    std::string toString() const;

protected:
    int value;
};


#endif //TP_COMPILO_NUMBER_H
