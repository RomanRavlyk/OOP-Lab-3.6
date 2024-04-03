#include "D3.h"

int main()
{
    B1 o0(777);
    cout << "B1 o0(777);" << endl;
    cout << "sizeof(B1) = " << sizeof(B1) << endl;
    cout << endl << "I. B1: " << endl;
    o0.show_B1();

    B2 o01(777);
    cout << "B2 o0(777);" << endl;
    cout << "sizeof(B2) = " << sizeof(B2) << endl;
    cout << endl << "I. B2: " << endl;
    o01.show_B2();

    B3 o02(777);
    cout << "B3 o02(777);" << endl;
    cout << "sizeof(B3) = " << sizeof(B2) << endl;
    cout << endl << "I. B3: " << endl;
    o02.show_B3();

    D1 o1(111, 222, 333);
    cout << "D1 o1(111, 222, 333);" << endl;
    cout << "sizeof(D1) = " << sizeof(D1) << endl;
    cout << endl << "I. D1: " << endl;
    o1.show_D1();

    D2 o2(1000, 2000);
    cout << "D2 o2(1000, 2000);" << endl;
    cout << "sizeof(D2) = " << sizeof(D2) << endl;
    cout << endl << "I. D2: " << endl;
    o2.show_D2();

    D3 o3(1, 2, 3, 4, 5, 6);
    cout << "D3 o3(1, 2, 3, 4, 5, 6);" << endl;
    cout << "sizeof(D4) = " << sizeof(D3) << endl;
    cout << endl << "I. D3: " << endl;
    o3.show_D3();

    return 0;
}