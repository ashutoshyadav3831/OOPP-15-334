#include <iostream>
using namespace std;
class point
{
    int x, y;

public:

    //   point(){
    //       x=y=0;
    //   }
    // point() : x{0}, y{0} {
    //     cout<<"Default Constructor : \n";
    // }



    point(int p=0, int q=0) : x{p}, y{q} {
        cout << "parametarized Constructor : \n";
    }



    // point add (point p, point q ){
    //     return point(p.x+q.x,p.y+q.y);
    // }
    void add (point q,point p){
        x=q.x+p.x;
        y=p.y+q.y;
    }




    // point adds(point z){
    //     point r;
    //     r.x=x + z.x;
    //     r.y=y+ z.y;
    //     return r;
    // }
    point adds(point q){
        return point(x+q.x , y+q.y);      //nameless object creation
    }





    void show()
    {
        cout << x <<" "<< y << endl;
    }
};
int main()
{
    point y,x(6, 7),f(34,56);
    y.add(x,f);
    y.show();
    

}