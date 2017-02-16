#ifndef TP_COMPILO_E0_H
#define TP_COMPILO_E0_H

#include "Etat.h"
#include "../Automate.h"
#include "../Symbole.h"

class E0 : public Etat {
public:
    E0();
    ~E0();
    virtual bool transition(Automate & automate, Symbole * s);
};

#endif //TP_COMPILO_E0_H
