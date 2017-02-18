#ifndef TP_COMPILO_OPEN_H
#define TP_COMPILO_OPEN_H

#include <string>
#include "Symbol.h"

class Open : public Symbol {
public:
    Open();
    ~Open();
    std::string toString() const;
};


#endif //TP_COMPILO_OPEN_H
