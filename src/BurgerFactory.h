#ifndef BURGERFACTORY_H
#define BURGERFACTORY_H

#include "FoodFactory.h"

class BurgerFactory : public FoodFactory {
public:
    IFood* create() override;
};

#endif // BURGERFACTORY_H
