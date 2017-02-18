#ifndef TP_COMPILO_Symbol_H
#define TP_COMPILO_Symbol_H

#include <string>
#include <ostream>

class Symbol {
protected:
    int ident;
public:
    Symbol(int id);

    virtual ~Symbol();

    virtual std::string toString() const;

    operator int() const { return ident; }

    friend std::ostream& operator<<(std::ostream& ofs, const Symbol& s);
};

#endif //TP_COMPILO_Symbol_H