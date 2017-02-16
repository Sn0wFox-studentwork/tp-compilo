#ifndef TP_COMPILO_E7_H
#define TP_COMPILO_E7_H

#include "Etat.h"
#include "../Automate.h"
#include "../Symbole.h"

class E7 : public Etat {
public:
    E7();
    ~E7();
    virtual bool transition(Automate & automate, Symbole * s);
};

#endif //TP_COMPILO_E0_H
