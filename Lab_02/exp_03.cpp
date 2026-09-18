#include<iostream>
using namespace std;
int byReference(int &x){
   return x=x+x/10;
}
int byPointer(int*x){
  return  *x=*x+*x/10;
}
int main(){
    int salary = 50000;
    
    return 0;
}