#include "DecoyDuck.h"
#include "FlyNoWay.h"

DecoyDuck::DecoyDuck() {
	flyBehavior = new FlyNoWay();
}

void DecoyDuck::display() {
	cout << "Derevyannaya utka" << endl;
}

