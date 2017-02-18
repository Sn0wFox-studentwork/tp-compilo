#ifndef TP_COMPILO_SYMBOL_H
#define TP_COMPILO_SYMBOL_H

#include <string>
#include <ostream>

/**
 * An abstract symbol that a lexical analyzer can find.
 */
class Symbol {
public:
    /**
     * Constructor.
     * @param id The ID of the symbol's family.
     */
    Symbol(int id);

    /**
     * Destructor.
     */
    virtual ~Symbol();

    /**
     * Transforms the symbol into a string.
     * @return The symbol as a string.
     */
    virtual std::string toString() const;

    /**
     * Cast the symbol into an int.
     * The returned int is the ID of the symbol's family.
     * @return The symbol as an int.
     */
    inline operator int() const { return ident; }

    /**
     * << operator overload.
     * @param ofs The output stream.
     * @param s The symbol to insert in the output stream.
     * @return The output stream with the symbol inserted thanks to toString().
     */
    friend std::ostream& operator<<(std::ostream& ofs, const Symbol& s);

protected:
    /**
     * ID of the symbol's family.
     * See ../Token.enum.cpp
     */
    int ident;
};

#endif //TP_COMPILO_SYMBOL_H