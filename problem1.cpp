#include <bits/stdc++.h>
using namespace std;
int total(int x, int y, int z, int a, int b)
{
    return (x + y + z + a + b);
}
double percent(int x, int y, int z, int a, int b)
{
    return (x + y + z + a + b) / 5.0;
}
void display(string name, string branch, int roll, string section)
{
    cout << "Name: " << name << endl;
    cout << "Branch: " << branch << endl;
    cout << "Section: " << section << endl;
    cout << "Roll No.: " << roll << endl;
}
int main()
{
    int x, y, z, a, b, roll;
    string name, branch, section;
    cout << "enter name: ";
    getline(cin, name);
    cout << "enter branch: ";
    cin >> branch;
    cout << "enter section: ";
    cin >> section;
    cout << "enter roll no. : ";
    cin >> roll;
    cout << "enter marks: ";
    cin >> x >> y >> z >> a >> b;
    display(name, branch, roll, section);
    cout << "Total Marks: " << total(x, y, z, a, b) << endl;
    cout << "Percentage: " << percent(x, y, z, a, b) << "%" << endl;
}
