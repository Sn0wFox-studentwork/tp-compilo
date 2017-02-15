#ifndef TP_COMPILO_Etat_H
#define TP_COMPILO_Etat_H
#include "Symbole.h"
#include "Automate.h"
#include <string>

class Automate;

class Etat {
public:
    Etat (std::string name);
    virtual ~Etat();
    void print() const;
    virtual bool transition(Automate & automate, Symbole *s) = 0;

protected:
   std::string name;
};   
      	
#endif 
