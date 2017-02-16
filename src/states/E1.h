#ifndef TP_COMPILO_E1_H
#define TP_COMPILO_E1_H

#include "Etat.h"
#include "../Automate.h"
#include "../Symbole.h"

class E1 : public Etat {
public:
    E1();
    ~E1();
    virtual bool transition(Automate & automate, Symbole * s);
};

#endif //TP_COMPILO_E1_H
