#ifndef TP_COMPILO_Etat_H
#define TP_COMPILO_Etat_H
#include "Symbole.h"

class Etat {
public:
    Etat (string name);
    virtual ~Etat();
    void print() const;
    virtual bool transition(Automate & automate, Symbole *s) =0;

protected:
   String name;
};   
      	
#endif 
