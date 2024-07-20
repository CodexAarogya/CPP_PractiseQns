#include <iostream>
#define pi 3.14
using namespace std;
void volume(float len)
{
    cout << "Volume: " << len * len * len;
}
void volume(float len, float bth, float hgt1)
{
    cout << "Volume: " << len * bth * hgt1;
}
void volume(float rad, float hgt2)
{
    cout << "Volume: " << pi * rad * rad * hgt2;
}
int main()
{
    float lenCube, lenBox, bdth, hgtBox, hgtCylinder, rad;
    cout << "------VOLUME OF CUBE------" << endl;
    cout << "Enter length: ";
    cin >> lenCube;
    volume(lenCube);
    cout << endl;
    cout << "------VOLUME OF BOX------" << endl;
    cout << "Enter length: ";
    cin >> lenBox;
    cout << "Enter Breadth: ";
    cin >> bdth;
    cout << "Enter height: ";
    cin >> hgtBox;
    volume(lenBox, bdth, hgtBox);
    cout << endl;
    cout << "------VOLUME OF CYLINDER------" << endl;
    cout << "Enter radius: ";
    cin >> rad;
    cout << "Enter height: ";
    cin >> hgtCylinder;
    volume(rad, hgtCylinder);
    return 0;
}