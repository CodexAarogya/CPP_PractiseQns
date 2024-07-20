#include<iostream>
using namespace std;
class Distance{
    int feet, inches, total;
    public:
    Distance(int,int);
    void addData(Distance);
    void display(void);
};
Distance::Distance(int ft, int in){
    feet=ft;
    inches=in;
    total= (feet*12) + inches;
}
void Distance::addData(Distance d){
    total = total + d.total;
    feet = total/12;
    inches= total%12;
}
void Distance::display(void){
    cout<<"Distance: "<<feet<<" ft "<<inches<<" in ";
}
int main()
{
    Distance d1(12,1);
    Distance d2(1,9);
    d1.addData(d2);
    d1.display();
    return 0;

}