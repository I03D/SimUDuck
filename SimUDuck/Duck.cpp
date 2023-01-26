#include "Duck.h"

void Duck::performFly() {
	flyBehavior->fly();
}

void Duck::quack() {
	cout << "Krya-krya" << endl;
}

void Duck::swim() {
	cout << "Bul-bul" << endl;
}


