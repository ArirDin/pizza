#ifndef SIMPLEPIZZAFACTORY_H
#define SIMPLEPIZZAFACTORY_H

#include "pizza.h"
#include "chilipizza.h"
#include "cheesepizza.h"

class SimplePizzaFactory
{
public:
    SimplePizzaFactory();
    Pizza* createPizza(QString type);
};

#endif // SIMPLEPIZZAFACTORY_H
