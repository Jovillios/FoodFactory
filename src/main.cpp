#include "BurgerFactory.h"
#include "FoodFactory.h"
#include "PizzaFactory.h"
#include "SushiFactory.h"
#include "iFood.h"
#include <iostream>
#include <vector>

int main() {
    std::cout << "Launching the main program" << std::endl;

    // Creating Factories
    std::cout << "Creating food factories" << std::endl;
    PizzaFactory pizzeria;
    BurgerFactory domac;
    SushiFactory sushishop;

    // Creating some food
    std::cout << "Creating food" << std::endl;
    std::unique_ptr<IFood> pizza = pizzeria.create();
    std::unique_ptr<IFood> bigmac = domac.create();
    std::unique_ptr<IFood> californien = sushishop.create();

    // Packing and delivering the food
    std::cout << "Packing and delivering..." << std::endl;
    pizzeria.deliver(std::move(pizza));
    domac.deliver(std::move(bigmac));
    sushishop.deliver(std::move(californien));

    // Now with pointers, vectors and loops
    std::cout << "Creating more factories" << std::endl;
    std::vector<std::unique_ptr<FoodFactory>> factories;
    for (int i = 0; i < 3; i++) {
        factories.push_back(std::unique_ptr<FoodFactory>(new PizzaFactory()));
        factories.push_back(std::unique_ptr<FoodFactory>(new SushiFactory()));
        factories.push_back(std::unique_ptr<FoodFactory>(new BurgerFactory()));
    }

    std::cout << "MOOOORE FOOOD" << std::endl;
    for (auto &factory : factories) {
        for (int i = 0; i < 5; i++) {
            factory->deliver(factory->create());
        }
    }

    // Cleanup
    std::cout << "End of main program- destroying heap objects" << std::endl;
    std::cout << "End of main program- destroying stack objects" << std::endl;
    return 0;
}
