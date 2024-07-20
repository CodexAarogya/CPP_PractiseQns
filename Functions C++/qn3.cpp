#include<iostream>
#define tax 0.1
using namespace std;
float calcSalary(float salary){
    return salary - (salary*tax);
}
int main()
{   float salary,amt;
    cout<<"Enter Salary: ";
    cin>>salary;
    amt=calcSalary(salary);
    cout<<"Net Salary: "<<amt;
    return 0;
}