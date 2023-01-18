#include "Duck.h"
#include "MallardDuck.h"

int main()
{
    Duck* mallard = new MallardDuck();

    mallard->display();
    mallard->quack();
    mallard->swim();

    cout << "--------------------------------------";

    return 0;
}