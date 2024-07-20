#include <iostream>
using namespace std;
class time
{
    int hr, min, sec, netTime;

public:
    time(int, int, int); // constructor is created..
    void addData(time);
    void display(void);
};
time::time(int h, int m, int s)
{
    hr = h;
    min = m;
    sec = s;
    netTime = (hr * 3600) + (min * 60) + sec;
}
void time::addData(time t2)
{
    netTime = netTime + t2.netTime;
}
void time::display()
{
    hr = (netTime / 3600);
    min = (netTime % 3600) / 60;
    sec = (netTime % 3600) % 60;
    cout << "hr:min:sec:  " << hr << " " << " " << min << " " << sec;
}

int main()
{
    time t1(12, 34, 56);
    time t2(10, 35, 14);
    t1.addData(t2);
    t1.display();
    return 0;
}