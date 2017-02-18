#ifndef TP_COMPILO_CLOSE_H
#define TP_COMPILO_CLOSE_H

#include <string>
#include "Symbol.h"

class Close : public Symbol {
public:
    Close();
    ~Close();
    std::string toString() const;
};


#endif //TP_COMPILO_CLOSE_H
