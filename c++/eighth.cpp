#include <iostream>
using namespace std;
class Time {
private:
    int HH, MM, SS;
public:
    void setTime(int x, int y, int z)
    {
        HH = x;
        MM = y;
        SS = z;
    }
    void showTime()
    {
        cout << endl
             << HH << ":" << MM << ":" << SS;
    }
    void normalize()
    {
        MM = MM + SS / 60;
        SS = SS % 60;
        HH = HH + MM / 60;
        MM = MM % 60;
    }
    Time operator+(Time t)
    {
        Time temp;
        temp.SS = SS + t.SS;
        temp.MM = MM + t.MM;
        temp.HH = HH + t.HH;
        temp.normalize();
        return (temp);
    }
};
int main()
{
    Time t1, t2, t3;
    t1.setTime(5, 50, 30);
    t2.setTime(7, 20, 34);
    t3 = t1 + t2;
    t1.showTime();
    t2.showTime();
    t3.showTime();
    return 0;
}