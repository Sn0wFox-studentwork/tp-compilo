#ifndef TP_COMPILO_E5_H
#define TP_COMPILO_E5_H

#include "Etat.h"
#include "../Automate.h"
#include "../Symbole.h"

class E5 : public Etat {
public:
    E5();
    ~E5();
    virtual bool transition(Automate & automate, Symbole * s);
};

#endif //TP_COMPILO_E0_H
