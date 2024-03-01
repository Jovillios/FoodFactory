#include "PizzaFactory.h"
#include "Pizza.h"

IFood* PizzaFactory::create() {
    IFood* pizza = new Pizza();
    pizza->prepare();
    return pizza;
}
