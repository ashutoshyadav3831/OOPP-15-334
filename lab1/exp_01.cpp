#include <iostream>
using namespace std;

class Student
{
    string name;
    int rollno;
    string branch;

public:
    void input()
    {
        cout << "Enter Student Name : ";
        cin >> name;
        cout << "Enter Student Branch : ";
        cin >> branch;
        cout << "Enter Roll no. : ";
        cin >> rollno;
    }

    void show()
    {
        cout << "Student Name : " << name << endl;
        cout << "Branch : " << branch << endl;
        cout << "Roll number : " << rollno << endl;
    }
};

int main()
{
    Student S1;
    Student S2;
    S1.input();
    S2.input();
    S1.show();
    S2.show();
}