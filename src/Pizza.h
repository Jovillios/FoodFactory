#ifndef PIZZA_H
#define PIZZA_H

#include "Food.h"

class Pizza : public Food {
public:
    void prepare() override;
    void pack() override;
};

#endif // PIZZA_H
