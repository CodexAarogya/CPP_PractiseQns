#include <iostream>
using namespace std;
class second;
class first
{
    int data1;
    friend void display(first, second);

public:
    first(int d1)
    {
        data1 = d1;
    }
};
class second
{
    int data2;
    friend void display(first, second);

public:
    second(int d2)
    {
        data2 = d2;
    }
};
void display(first d1, second d2)
{
    cout << "Entered values: " << endl
         << "value 1: " << d1.data1 << endl
         << "Value 2: " << d2.data2 << endl;
    if (d1.data1 > d2.data2)
        cout << d1.data1 << " is largest.";
    else
        cout << d2.data2 << " is largest.";
}
int main()
{
    first d1(3);
    second d2(4);
    display(d1, d2);
    return 0;
}