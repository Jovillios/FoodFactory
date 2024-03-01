#ifndef FOODFACTORY_H
#define FOODFACTORY_H

#include "iFood.h"
#include <memory>

class FoodFactory {
public:
    virtual IFood* create() = 0;
    void deliver(IFood* food);
    virtual ~FoodFactory() {}
};

#endif // FOODFACTORY_H
