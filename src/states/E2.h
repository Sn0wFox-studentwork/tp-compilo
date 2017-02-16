#ifndef TP_COMPILO_E2_H
#define TP_COMPILO_E2_H

#include "Etat.h"
#include "../Automate.h"
#include "../Symbole.h"

class E2 : public Etat {
public:
    E2();
    ~E2();
    virtual bool transition(Automate & automate, Symbole * s);
};

#endif //TP_COMPILO_E0_H
