#ifndef TP_COMPILO_ETAT_H
#define TP_COMPILO_ETAT_H

#include <string>
#include "../symbols/Symbol.h"
#include "../Automate.h"

class Automate;

class Etat {
public:
    /**
     * Constructor.
     */
    Etat();

    /**
     * Destructor.
     */
    virtual ~Etat();

    /**
     * Make the transition to the next state
     * for the given state machine and with the given symbol.
     * @param automate A reference to the state machine to make change state.
     * @param s A pointer to the symbol with which change state.
     * @return A boolean indicating whether or not the machine is in a final state.
     */
    virtual bool transition(Automate & automate, Symbol *s) = 0;
};   
      	
#endif
