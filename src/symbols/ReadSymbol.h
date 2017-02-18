#ifndef TP_COMPILO_READSYMBOL_H
#define TP_COMPILO_READSYMBOL_H

#include "Symbole.h"
#include <string>

class ReadSymbol : public Symbole {
protected:
    std::string read;

public:
    ReadSymbol(int id, std::string character);
    ~ReadSymbol();

    std::string getCharacter();
    virtual std::string toString();
};


#endif //TP_COMPILO_READSYMBOL_H
