#pragma once
#include "D1.h"
#include "D2.h"
#include <iostream>
using namespace std;
class D3 : public D1, protected D2
{
    int d3;
public:
    D3(int x, int h, int k, int y, int z, int l)
        : D1(h, k, y), D2(z, l)
    {
        d3 = x;
    }

    ~D3() { };

    void show_D3();
};