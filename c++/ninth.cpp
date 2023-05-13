#include<iostream>
using namespace std;

class Time{
    int HH, MM, SS;
    public:
    Time(int h = 0, int m = 0, int s = 0){
        HH = h;
        MM = m;
        SS = s;
    }
    Time operator + (Time s){
        Time t;
        t.HH = HH + s.HH;
        t.MM = MM + s.MM;
        t.SS = SS + s.SS;
        if(t.MM > 59){
            t.HH++;
            t.MM = t.MM - 60;
        }
        if(t.SS > 59){
            t.MM++;
            t.SS = t.SS - 60;
        }
        return t;
    }
    void show(){
        cout << HH << "." << MM << "." << SS;
    }
};

int main(){
    Time o(5,55,67);
    Time o1(6,44,39);
    Time o2;
    o2 = o1 + o;
    o2.show();
    return 0;
}