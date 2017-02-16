#include <stdarg.h>
#include "Etat.h"
#include "Symbole.h"
#include "E3.ccp"
#include "E6.ccp"
#include "E2.ccp"

bool E2 :: transition( Automate & automate, Symbole * s) {
	switch(*s){
	case VAL:
	  automate.decalage(s, new E3);
	  break; 
	case EXPR:
	  automate.decalage(s, new E6);
	  break; 
	case OPEN:
	  automate.decalage(s, new E2);
	  break;  
	  
	
	 }
return false;
}
