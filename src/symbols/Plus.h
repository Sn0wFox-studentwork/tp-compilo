#ifndef TP_COMPILO_PLUS_H
#define TP_COMPILO_PLUS_H

#include <string>
#include "Symbole.h"

class Plus : public Symbole {
public:
    Plus();
    ~Plus();
    std::string toString() const;
};


#endif //TP_COMPILO_PLUS_H
