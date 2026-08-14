#include <bits/stdc++.h>
using namespace std;
void callbyvalue(int x, int y)
{
    cout << "Call by value" << endl;
    cout << "x: " << x << " y: " << y << endl;
    int z = x;
    x = y;
    y = z;
    cout << "Value after swap" << endl;
    cout << "x: " << x << " y: " << y << endl;
}
void callbyreference(int &x, int &y)
{
    cout << "Call by reference" << endl;
    cout << "x: " << x << " y: " << y << endl;
    int z = x;
    x = y;
    y = z;
    cout << "Value after swap" << endl;
    cout << "x: " << x << " y: " << y << endl;
}
void callbyaddress(int *x, int *y)
{
    cout << "Call by address" << endl;
    cout << "x: " << *x << " y: " << *y << endl;
    int *z = x;
    *x = *y;
    *y = *z;
    cout << "Value after swap" << endl;
    cout << "x: " << *x << " y: " << *y << endl;
}
main()
{
    int a=5;
    int b=4;
    callbyvalue (a,b);
    callbyreference(a,b);
    callbyaddress(&a, &b);
}
