#include <stdarg.h>
#include "Etat.h"
#include "Symbole.h"

bool E1 :: transition( Automate & automate, Symbole * s) {
	switch(*s){
	case PLUS:
	  automate.decalage(s, new E4);
	  break; 
	case MULT:
	  automate.decalage(s, new E5);
	  break; 
	  
	  
	
	 }
return false;
}
