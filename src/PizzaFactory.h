#ifndef PIZZAFACTORY_H
#define PIZZAFACTORY_H

#include "FoodFactory.h"

class PizzaFactory : public FoodFactory {
public:
    IFood* create() override;
};

#endif // PIZZAFACTORY_H
