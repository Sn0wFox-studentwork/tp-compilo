#ifndef TP_COMPILO_EXPRESSION_H
#define TP_COMPILO_EXPRESSION_H

#include <string>
#include <vector>
#include "Symbole.h"

class Expression : public Symbole {
public:
    Expression();
    virtual ~Expression();
    virtual int eval() const = 0;
    std::string toString() const;
};


#endif //TP_COMPILO_EXPRESSION_H
