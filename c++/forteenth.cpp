#include <iostream>
using namespace std;
class Complex
{
    float real,imag;
    public:
    Complex();
    Complex(float r,float i);
    Complex add(Complex);
    Complex operator+ (Complex obj);
    void display()const;
};
Complex::Complex()
{
    real=0;
    imag=0;
}
Complex::Complex(float r,float i)
{
    real=r;
    imag=i;
}

Complex Complex::add(Complex obj)
{
    Complex t;
    t.real=real+obj.real;
    t.imag=imag +obj.imag;
    return t;
}
Complex Complex:: operator+(Complex obj)
{
    Complex t;
    t.real=real+obj.real;
    t.imag=imag +obj.imag;
    return t;
}
void Complex::display() const
{
    cout<<real<<"i"<<imag<<endl;
    
};
int main() 
{
    Complex obj1(3,7);
    const Complex obj2(8,5);
    obj1.display();
    
    Complex obj3;
    Complex obj4;
    Complex obj5;
     obj3=obj1+obj2;
    
obj3.display();
obj5=obj4.add(obj2);
obj5.display();
 
    return 0;
}
