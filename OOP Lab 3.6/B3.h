#pragma once
#include <iostream>
using namespace std;
class B3 {
	int b3;
public:
	B3()
		: b3(0)
	{ }
	B3(int x)
	{
		b3 = x;
	}

	~B3() {};
	void show_B3();
};
