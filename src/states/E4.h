#ifndef TP_COMPILO_E4_H
#define TP_COMPILO_E4_H

#include "Etat.h"
#include "../Automate.h"
#include "../symbols/Symbole.h"

class E4 : public Etat {
public:
    E4();
    ~E4();
    virtual bool transition(Automate & automate, Symbole * s);
};

#endif //TP_COMPILO_E0_H
