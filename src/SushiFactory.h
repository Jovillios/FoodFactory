#ifndef SUSHIFACTORY_H
#define SUSHIFACTORY_H

#include "FoodFactory.h"

class SushiFactory : public FoodFactory {
public:
    std::unique_ptr<IFood> create() override;
};

#endif // SUSHIFACTORY_H
