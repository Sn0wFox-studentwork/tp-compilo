#include "Etat.h"
#include "Symbole.h"
#include "E1.ccp"
#include "E2.ccp"
#include "E3.ccp"

bool E0 :: transition( Automate & automate, Symbole * s) {
	switch(*s) {
        case OPEN:
          automate.decalage(s, new E2);
          break;
        case EXPR:
          automate.decalage(s, new E1);
          break;
        case VAL:
          automate.decalage(s , new E3);
          break;
    }
    return false;
}
