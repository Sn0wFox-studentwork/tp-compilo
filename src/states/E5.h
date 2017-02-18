#ifndef TP_COMPILO_E5_H
#define TP_COMPILO_E5_H

#include "Etat.h"
#include "../Automate.h"
#include "../symbols/Symbol.h"

class E5 : public Etat {
public:
    E5();
    ~E5();
    bool transition(Automate & automate, Symbol * s);
};

#endif //TP_COMPILO_E0_H
