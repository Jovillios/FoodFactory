#ifndef FOODFACTORY_H
#define FOODFACTORY_H

#include "IFood.h"
#include <memory>

class FoodFactory {
public:
    virtual std::unique_ptr<IFood> create() = 0;
    void deliver(std::unique_ptr<IFood> food);
    virtual ~FoodFactory() {}
};

#endif // FOODFACTORY_H
