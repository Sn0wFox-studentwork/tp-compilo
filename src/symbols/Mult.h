#ifndef TP_COMPILO_MULT_H
#define TP_COMPILO_MULT_H

#include <string>
#include "Symbole.h"

class Mult : public Symbole {
public:
    Mult();
    ~Mult();
    std::string toString() const;
};


#endif //TP_COMPILO_MULT_H
