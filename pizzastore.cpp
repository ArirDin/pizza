#include "pizzastore.h"

PizzaStore::PizzaStore(SimplePizzaFactory *f)
{
    this->factory = f;
}

Pizza* PizzaStore::orderPizza(QString type){
    Pizza *pizza = factory->createPizza(type);

    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();

    return pizza;
}
