#pragma once
#include <iostream>
#include "B3.h"

using namespace std;
class D2 : protected B3 {
	int d2;
public:
	D2()
		: d2(0)
	{ }
	D2(int x, int y) :
		B3(y)
	{
		d2 = x;
	}

	~D2() {};
	void show_D2();
};
