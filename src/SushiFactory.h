#ifndef SUSHIFACTORY_H
#define SUSHIFACTORY_H

#include "FoodFactory.h"

class SushiFactory : public FoodFactory {
public:
    /*
    Returns Sushi as Food.
    When overriding this function, make sure you return a Sushi.
    */
    std::unique_ptr<IFood> create() override;
};

#endif // SUSHIFACTORY_H
