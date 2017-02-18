#ifndef TP_COMPILO_E0_H
#define TP_COMPILO_E0_H

#include "Etat.h"
#include "../Automate.h"
#include "../symbols/Symbol.h"

class E0 : public Etat {
public:
    E0();
    ~E0();
    bool transition(Automate & automate, Symbol * s);
};

#endif //TP_COMPILO_E0_H
