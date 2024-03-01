#ifndef BURGER_H
#define BURGER_H

#include "iFood.h"

class Burger : public IFood {
public:
    void prepare() override;
    void pack() override;
};

#endif // BURGER_H
