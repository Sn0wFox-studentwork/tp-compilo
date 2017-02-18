#ifndef TP_COMPILO_ETAT_H
#define TP_COMPILO_ETAT_H

#include <string>
#include "../symbols/Symbol.h"
#include "../Automate.h"

class Automate;

class Etat {
public:
    Etat();
    virtual ~Etat();
    void print() const;
    virtual bool transition(Automate & automate, Symbol *s) = 0;

//protected:
//   std::string name;
};   
      	
#endif
