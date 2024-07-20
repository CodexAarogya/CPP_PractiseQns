#include<iostream>
using namespace std;
class centigrade{
    float data;
    public:
    void getData(void);
    void convert_fahrenheit(void);
    void display(void);
};
class fahrenheit{
    float data;
    public:
    void getData(void);
    void convert_celcius(void);
    void display(void);
};
void centigrade::getData(void){
    cout<<"Enter temperature (in degree celcius): ";
    cin>>data;
}
void centigrade::convert_fahrenheit(void){
    data = (data*1.8) + 32;
}
void centigrade::display(void){
    cout<<data<<" degree fahrenheit"<<endl;
}
void fahrenheit::getData(void){
    cout<<"Enter temperature (in degree fahrenheit): ";
    cin>>data;
}
void fahrenheit::convert_celcius(void){
    data = (data-32) / 1.8;
}
void fahrenheit::display(void){
    cout<<data<<" degree celcius"<<endl;
}
int main()
{
    centigrade cen;
    fahrenheit fah;
    cout<<"Select Conversion: "<<endl<<"Centigrade-Fahrenheit (Press 1)."<<endl<<"Fahrenheit-Centigrade (press 2)."<<endl;
    int choice;
    cin>>choice;
    switch(choice)
    {
        case 1: {
            cen.getData();
            cen.convert_fahrenheit();
            cen.display();
            break;
        }
        case 2: {
            fah.getData();
            fah.convert_celcius();
            fah.display();
            break;
        }
        default: {
            cout<<"Invalid Input !!";
        }

    }
    return 0;
}