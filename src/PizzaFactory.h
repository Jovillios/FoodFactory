#ifndef PIZZAFACTORY_H
#define PIZZAFACTORY_H

#include "FoodFactory.h"

class PizzaFactory : public FoodFactory {
public:
    std::unique_ptr<IFood> create() override;
};

#endif // PIZZAFACTORY_H
