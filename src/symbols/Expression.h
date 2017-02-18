#ifndef TP_COMPILO_EXPRESSION_H
#define TP_COMPILO_EXPRESSION_H

#include <string>
#include <vector>
#include "Symbol.h"

class Expression : public Symbol {
public:
    Expression();
    virtual ~Expression();
    virtual int eval() const = 0;
    std::string toString() const;

    friend std::ostream& operator<<(std::ostream& ofs, const Expression& s);
};


#endif //TP_COMPILO_EXPRESSION_H
