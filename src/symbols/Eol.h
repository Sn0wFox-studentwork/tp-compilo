#ifndef TP_COMPILO_EOL_H
#define TP_COMPILO_EOL_H

#include <string>
#include "Symbol.h"

class Eol : public Symbol {
public:
    Eol();
    ~Eol();
    std::string toString() const;
};


#endif //TP_COMPILO_EOL_H
