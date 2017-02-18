#ifndef TP_COMPILO_OPEN_H
#define TP_COMPILO_OPEN_H

#include <string>
#include "Symbole.h"

class Open : public Symbole {
public:
    Open();
    ~Open();
    std::string toString() const;
};


#endif //TP_COMPILO_OPEN_H
