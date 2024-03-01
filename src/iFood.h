#ifndef IFOOD_H
#define IFOOD_H

class IFood {
public:
    virtual void prepare() = 0;
    virtual void pack() = 0;
    virtual ~IFood() {}
};

#endif // IFOOD_H