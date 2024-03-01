#include "PizzaFactory.h"
#include "Pizza.h"

std::unique_ptr<IFood> PizzaFactory::create() {
    return std::make_unique<Pizza>();
}
