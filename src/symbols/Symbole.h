#ifndef TP_COMPILO_SYMBOLE_H
#define TP_COMPILO_SYMBOLE_H

#include <string>

class Symbole {
protected:
    int ident;
public:
    Symbole(int id);

    virtual ~Symbole();

    virtual std::string toString() const;

    operator int() const { return ident; }

    operator std::string() const { return toString(); }
};

#endif //TP_COMPILO_SYMBOLE_H