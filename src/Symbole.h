#ifndef TP_COMPILO_SYMBOLE_H
#define TP_COMPILO_SYMBOLE_H

class Symbole {
protected:
    int ident;
public:
    Symbole(int id);

    virtual ~Symbole();

    void print();

    operator int() const { return ident; }
};

#endif //TP_COMPILO_SYMBOLE_H