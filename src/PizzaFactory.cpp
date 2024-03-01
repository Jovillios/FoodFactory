#include "PizzaFactory.h"
#include "Pizza.h"

std::unique_ptr<IFood> PizzaFactory::create() {
    std::unique_ptr<IFood> b = std::unique_ptr<IFood>(new Pizza());
    b->prepare();
    return b;
}
