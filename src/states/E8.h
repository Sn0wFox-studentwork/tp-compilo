#ifndef TP_COMPILO_E8_H
#define TP_COMPILO_E8_H

#include "Etat.h"
#include "../Automate.h"
#include "../symbols/Symbol.h"

class E8 : public Etat {
public:
    E8();
    ~E8();
    bool transition(Automate & automate, Symbol * s);
};

#endif //TP_COMPILO_E0_H
