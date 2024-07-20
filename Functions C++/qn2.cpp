#include<iostream>
using namespace std;
void display(char c = '*', int n = 3){
    for(int i=0; i<n;i++)
    cout<<c;
}
int main()
{
    int n;
    char c;
    cout<<"Enter value of n: ";
    cin>>n;
    cout<<"Enter the character: ";
    cin>>c;
    cout<<"Default arguments: "<<endl;
    display();
    cout<<"After passing argument: "<<endl;
    display(c,n);
}
void display(char c, int n){
    int i;
    for(i=0; i<n; i++)
    {
        cout<<c;
    }
}