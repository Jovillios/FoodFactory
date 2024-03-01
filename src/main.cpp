#include "BurgerFactory.h"
#include "FoodFactory.h"
// #include "PizzaFactory.h"
// #include "SushiFactory.h"
#include "iFood.h"
#include <iostream>

int main() {
    std::cout << "Launching the main program" << std::endl;
    std::cout << "Creating food factories" << std::endl;
    // Creating Factories
    // PizzaFactory pizzeria;
    BurgerFactory domac;
    // SushiFactory sushishop;
    // Creating some food
    std::cout << "Creating food" << std::endl;
    // std::unique_ptr<IFood> pizza = pizzeria.create();
    std::unique_ptr<IFood> bigmac = domac.create();
    // std::unique_ptr<IFood> californien = sushishop.create();
    // Packing and delivering the food
    std::cout << "Packing and delivering..." << std::endl;
    // pizzeria.deliver(pizza);
    domac.deliver(std::move(bigmac));
    // sushishop.deliver(californien);
    // Cleaning
    std::cout << "End of main program- destroying heap objects" << std::endl;
    std::cout << "End of main program- destroying stack objects" << std::endl;
    return 0;
}
