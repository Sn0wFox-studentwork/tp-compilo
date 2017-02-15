#ifndef TP_COMPILO_EXPR_H
#define TP_COMPILO_EXPR_H

#include <map>
#include <string>
#include "Symbole.h"

class Expr : public Symbole {
public:
	Expr();
	virtual ~Expr();
	virtual double eval (const std::map<std::string, double>& valeurs) = 0;
};

#endif 
