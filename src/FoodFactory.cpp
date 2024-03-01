#include "FoodFactory.h"
#include <iostream>

void FoodFactory::deliver(IFood* food) {
    food->pack();
    std::cout << "Food delivered." << std::endl;
}
