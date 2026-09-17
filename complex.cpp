
//complex no. show,add,operator overload,


#include <bits/stdc++.h>
using namespace std;
class complx
{
private:
    int img, real;

public:
    void input()
    {
        cin >> real >> img;
    }
    void show()
    {
        cout << real;
        if (img > 0)
        {
            cout << "+" << img << "i" << endl;
        }
        else
        {
            cout << img << "i" << endl;
        }
    }
    void add(int a, int b)
    {
        real += a;
        img += b;
    }
    void add(complx p, complx q)
    {
        real = p.real + q.real;
        img = p.img + q.real;
    }
    void add(complx p)
    {
        real += p.real;
        img += p.img;
    }
    complx adds(int a, int b)
    {
        complx s;
        s.real = real + a;
        s.img = img + b;
        return s;
    }
};
int main()
{
    complx c1, c2;
    c1.input();

    c2 = c1.adds(5, 4);
    c2.show();
    return 0;
}
