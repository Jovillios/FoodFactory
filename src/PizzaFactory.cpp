#include "PizzaFactory.h"
#include "Pizza.h"

std::unique_ptr<IFood> PizzaFactory::create() {
    IFood* pizza = new Pizza();
    pizza->prepare();
    return pizza;
}

std::unique_ptr<IFood> create() {
    std::unique_ptr<IFood> p = new Pizza();
}
