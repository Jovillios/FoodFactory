#include "FoodFactory.h"
#include <iostream>

void FoodFactory::deliver(std::unique_ptr<IFood> food) {
    food->prepare();
    food->pack();
    std::cout << "Food delivered." << std::endl;
}
