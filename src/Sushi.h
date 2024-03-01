#ifndef SUSHI_H
#define SUSHI_H

#include "iFood.h"

class Sushi : public IFood {
public:
    void prepare() override;
    void pack() override;
};

#endif // SUSHI_H
