#ifndef PIZZAFACTORY_H
#define PIZZAFACTORY_H

#include "FoodFactory.h"

class PizzaFactory : public FoodFactory {
public:
    /*
    Returns a Pizza as Food.
    When overriding this function, make sure you return a Pizza.
    */
    std::unique_ptr<IFood> create() override;
};

#endif // PIZZAFACTORY_H
