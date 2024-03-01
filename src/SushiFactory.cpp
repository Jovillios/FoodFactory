#include "SushiFactory.h"
#include "Sushi.h"

std::unique_ptr<IFood> SushiFactory::create() {
    std::unique_ptr<IFood> b = std::unique_ptr<IFood>(new Sushi());
    b->prepare();
    return b;
}
