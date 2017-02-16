#ifndef TP_COMPILO_E6_H
#define TP_COMPILO_E6_H

#include "Etat.h"
#include "../Automate.h"
#include "../Symbole.h"

class E6 : public Etat {
public:
    E6();
    ~E6();
    virtual bool transition(Automate & automate, Symbole * s);
};

#endif //TP_COMPILO_E0_H
