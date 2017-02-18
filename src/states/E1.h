#ifndef TP_COMPILO_E1_H
#define TP_COMPILO_E1_H

#include "Etat.h"
#include "../Automate.h"
#include "../symbols/Symbol.h"

class E1 : public Etat {
public:
    E1();
    ~E1();
    virtual bool transition(Automate & automate, Symbol * s);
};

#endif //TP_COMPILO_E1_H
