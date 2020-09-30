#ifndef PIZZASTORE_H
#define PIZZASTORE_H

#include "simplepizzafactory.h"

class PizzaStore
{
    SimplePizzaFactory* factory;
public:
    PizzaStore(SimplePizzaFactory *f);
    Pizza* orderPizza(QString type);
};

#endif // PIZZASTORE_H
