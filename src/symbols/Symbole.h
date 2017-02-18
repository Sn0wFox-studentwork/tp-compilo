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

    operator const char*() const { return toString().c_str(); }

    // operator const std::string() const { return toString(); }

    operator int() const { return ident; }
};

#endif //TP_COMPILO_SYMBOLE_H