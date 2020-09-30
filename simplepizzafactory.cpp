#include "simplepizzafactory.h"

SimplePizzaFactory::SimplePizzaFactory()
{

}

Pizza* SimplePizzaFactory::createPizza(QString type){
    Pizza *pizza = nullptr;

    if (type == "chili"){
        pizza == new ChiliPizza();
    }
    return pizza;
}
