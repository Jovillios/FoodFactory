#include "BurgerFactory.h"
#include "Burger.h"

std::unique_ptr<IFood> BurgerFactory::create() {
    std::unique_ptr<IFood> b = std::unique_ptr<IFood>(new Burger());
    b->prepare();
    return b;
}
