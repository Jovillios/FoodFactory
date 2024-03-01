#include "PizzaFactory.h"
#include "SushiFactory.h"
#include <iostream>

int main() {
    // Create a PizzaFactory object
    PizzaFactory pizzaFactory;

    // Create a Pizza object using the factory
    IFood* pizza = pizzaFactory.create();

    // Use the PizzaFactory to deliver the pizza
    pizzaFactory.deliver(std::move(pizza));

    std::cout << "Pizza has been prepared and delivered." << std::endl;

    return 0;
}
