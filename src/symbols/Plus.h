#ifndef TP_COMPILO_PLUS_H
#define TP_COMPILO_PLUS_H

#include <string>
#include "Symbol.h"

class Plus : public Symbol {
public:
    Plus();
    ~Plus();
    std::string toString() const;
};


#endif //TP_COMPILO_PLUS_H
