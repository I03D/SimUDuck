#pragma once
#include <iostream>
#include "FlyBehavior.h"

using namespace std;

class Duck {
protected:
	FlyBehavior* flyBehavior;

public:
	void performFly();
	void quack();
	void swim();
	virtual void display() = 0;
};

