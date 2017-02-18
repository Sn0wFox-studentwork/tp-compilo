#ifndef TP_COMPILO_CLOSE_H
#define TP_COMPILO_CLOSE_H

#include <string>
#include "Symbole.h"

class Close : public Symbole {
public:
    Close();
    ~Close();
    std::string toString() const;
};


#endif //TP_COMPILO_CLOSE_H
