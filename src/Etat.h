#ifndef TP_COMPILO_Etat_H
#define TP_COMPILO_Etat_H
#include "Symbole.h"
#include <string>

class Etat {
public:
    Etat (string name);
    virtual ~Etat();
    void print() const;
    virtual bool transition(Automate & automate, Symbole * s) =0;

protected:
   string name;
};   
      	
#endif 
