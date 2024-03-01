#ifndef PIZZA_H
#define PIZZA_H

#include "iFood.h"

class Pizza : public IFood {
public:
    void prepare() override;
    void pack() override;
};

#endif // PIZZA_H
