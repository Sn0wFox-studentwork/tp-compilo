#ifndef TP_COMPILO_E3_H
#define TP_COMPILO_E3_H

#include "Etat.h"
#include "../Automate.h"
#include "../symbols/Symbole.h"

class E3 : public Etat {
public:
    E3();
    ~E3();
    virtual bool transition(Automate & automate, Symbole * s);
};

#endif //TP_COMPILO_E0_H
