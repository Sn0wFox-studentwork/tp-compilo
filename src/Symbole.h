class Symbole {
protected:
    int ident;
public:
    Symbole(int id);

    virtual ~Symbole();

    void print();

    operator int() const { return ident; }

};

