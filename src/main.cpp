#include "BurgerFactory.h"
#include "FoodFactory.h"
#include "PizzaFactory.h"
#include "SushiFactory.h"
#include "iFood.h"
#include <iostream>

int main() {
    std::cout << "Launching the main program" << std::endl;
    std::cout << "Creating food factories" << std::endl;
    // Creating Factories
    PizzaFactory pizzeria;
    BurgerFactory domac;
    SushiFactory sushishop;
    // Creating some food
    std::cout << "Creating food" << std::endl;
    std::unique_ptr<IFood> pizza = pizzeria.create();
    std::unique_ptr<IFood> bicmac = domac.create();
    std::unique_ptr<IFood> californien = sushishop.create();
    // Preparing and delivering the food
    std::cout << "Preparing and delivering..." << std::endl;
    pizza->prepare();
    pizza->pack();
    bicmac->prepare();
    bigmac->pack();
    californien->prepare();
    californien->pack();
    // Cleaning
    std::cout << "End of main program- destroying heap objects" << std::endl;
    std::cout << "End of main program- destroying stack objects" << std::endl;
    return 0;
}