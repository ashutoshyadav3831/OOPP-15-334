#include <iostream>
using namespace std;

class Student
{
    int roll;
    string name;

public:
    void input()
    {
        cout << "Enter Roll No.: ";
        cin >> roll;

        cout << "Enter Name: ";
        cin >> name;
    }

    void display()
    {
        cout << "\nRoll No.: " << roll;
        cout << "\nName: " << name;
    }
};

int main()
{
    Student s;

    s.input();
    s.display();

    return 0;
}