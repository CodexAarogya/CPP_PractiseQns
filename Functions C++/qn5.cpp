#include<iostream>
using namespace std;
int main()
{
    float sum=0,average;
    int s = static_cast<int>(sum);
    int avg = static_cast<int>(average);
    int *p,size,i;
    cout<<"Enter number of entries: ";
    cin>>size;
    p=new int[size];
    for(i=0;i<size;i++)
    {
        cout<<"Enter number: ";
        cin>>p[i];
        sum+=p[i];
    }
    avg= sum/size;
    cout<<"Sum = "<<sum<<endl<<"Average = "<<avg;
    delete []p;
    return 0;
}