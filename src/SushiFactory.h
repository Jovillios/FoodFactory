#ifndef SUSHIFACTORY_H
#define SUSHIFACTORY_H

#include "FoodFactory.h"

class SushiFactory : public FoodFactory {
public:
    IFood* create() override;
};

#endif // SUSHIFACTORY_H
