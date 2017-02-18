#ifndef TP_COMPILO_MULT_H
#define TP_COMPILO_MULT_H

#include <string>
#include "Symbol.h"

class Mult : public Symbol {
public:
    Mult();
    ~Mult();
    std::string toString() const;
};


#endif //TP_COMPILO_MULT_H
