#pragma once
#include "B1.h"
#include "B2.h"
#include <iostream>
using namespace std;
class D1 : public B1, private B2
{
    int d1;
public:
    D1(int x, int k, int y)
        : B1(k), B2(y)
    {
        d1 = x;
    }

    ~D1() { };

    void show_D1();
};