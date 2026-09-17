#include <iostream>
using namespace std;
class Complex
{
    int real, img;

public:
    Complex(int r = 0, int i = 0) : real{r}, img{i} {}
    void show()
    {
        cout << real << "," << img << endl;
    }
    // Complex operator+(Complex c)
    // {
    //     return Complex(real + c.real, img + c.img);
    // }
    Complex operator +(int p){
        return  Complex(real +5,img +5);
    }

friend Complex operator+(Complex c , Complex d);
friend Complex operator+(int p, Complex d);
};
Complex operator +(Complex c, Complex d){
    return Complex(c.real+d.real,c.img+d.img);
}
Complex operator+(int p, Complex d){
    return Complex(p+d.real,p+d.img);
}

    int main()
{
    Complex c1{5, 10}, c2{10, 20}, c3,c4,c5;
    c3 = c1+c2;
    c4=c1+5;
    c5=5+c1;
    c1.show();
    c2.show();
    c3.show();
    c4.show();
    c5.show();
    

    return 0;
}