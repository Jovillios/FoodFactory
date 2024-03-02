#ifndef BURGERFACTORY_H
#define BURGERFACTORY_H

#include "FoodFactory.h"

class BurgerFactory : public FoodFactory {
public:
    /*
    Returns a Burger as Food.
    When overriding this function, make sure you return a burger.
    */
    std::unique_ptr<IFood> create() override;
};

#endif // BURGERFACTORY_H
