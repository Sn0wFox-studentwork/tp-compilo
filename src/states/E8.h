#ifndef TP_COMPILO_E8_H
#define TP_COMPILO_E8_H

#include "Etat.h"
#include "../Automate.h"
#include "../Symbole.h"

class E8 : public Etat {
public:
    E8();
    ~E8();
    virtual bool transition(Automate & automate, Symbole * s);
};

#endif //TP_COMPILO_E0_H
