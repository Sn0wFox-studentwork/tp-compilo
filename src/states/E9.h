#ifndef TP_COMPILO_E9_H
#define TP_COMPILO_E9_H

#include "Etat.h"
#include "../Automate.h"
#include "../symbols/Symbol.h"

class E9 : public Etat {
public:
    E9();
    ~E9();
    virtual bool transition(Automate & automate, Symbol * s);
};

#endif //TP_COMPILO_E0_H
