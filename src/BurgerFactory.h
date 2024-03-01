#ifndef BURGERFACTORY_H
#define BURGERFACTORY_H

#include "FoodFactory.h"

class BurgerFactory : public FoodFactory {
public:
    std::unique_ptr<IFood> create() override;
};

#endif // BURGERFACTORY_H
