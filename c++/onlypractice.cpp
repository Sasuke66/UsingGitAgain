#include<iostream>
using namespace std;

namespace first_space{
    class Area{
        public:
        int s1;

        int rect(int s1, int s2)
        {
            return s1 * s2;
        }

        int circle(int s2)
        {
            return 3.14 * s2 * s2;
        }

        int sqr(int s2)
        {
            return s2 * s2;
        }
    };
}

using namespace first_space;
int main(){
    Area o;
    cout << "Area of rectangle : " << o.rect(2, 4) << "\n";
    cout << "Area of circle : " << o.circle(4) << "\n";
    cout << "Area of square : " << o.sqr(6);
}