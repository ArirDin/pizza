#include "simplepizzafactory.h"

SimplePizzaFactory::SimplePizzaFactory()
{

}

Pizza* SimplePizzaFactory::createPizza(QString type) {
    Pizza *pizza = nullptr;

    if (type == "cheese") {
        pizza = new CheesePizza();
    }

    else if (type == "chilli") {
        pizza = new ChiliPizza();
    }

    return pizza;
}
