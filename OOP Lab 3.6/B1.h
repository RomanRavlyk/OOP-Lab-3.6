#pragma once
#include <iostream>
using namespace std;
class B1 {
	;
	int b;
public:
	B1()
		: b(0)
	{ }
	B1(int x)
	{
		b = x;
	}

	~B1(){};
	void show_B1();
};