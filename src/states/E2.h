#ifndef TP_COMPILO_E2_H
#define TP_COMPILO_E2_H

#include "Etat.h"
#include "../Automate.h"
#include "../symbols/Symbol.h"

class E2 : public Etat {
public:
    E2();
    ~E2();
    bool transition(Automate & automate, Symbol * s);
};

#endif //TP_COMPILO_E0_H
