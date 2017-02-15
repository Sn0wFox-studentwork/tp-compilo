#ifndef TP_COMPILO_EXPR_H
#define TP_COMPILO_EXPR_H

Class Expr : public Symbole {
	public:
	Expr();
	virtual ~Expr() {};
	virtual double eval (const map<String, double> & valeurs)=0;
};
#endif 
