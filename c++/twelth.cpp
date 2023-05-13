#include<iostream>
using namespace std; 

class Ruppee;
const float rtod_crate = 0.012;
const float dtor_crate = 81.58;
class Dollar{
    private:
    float rtod_crate = 0.012;
    float dollar_val;
    public:
    Dollar(float dollar_val){
        this -> dollar_val = dollar_val;
    }
    void show(){
        cout << "\nDollar value is : " << dollar_val;
    }
    friend void conv_dtor(Dollar &o1, Ruppee &o2);
    friend void conv_rtod(Dollar &o1, Ruppee &o2);
};
class Ruppee{
    private:
    float dtor_crate = 81.58;
    float rs_val;
    public:
    Ruppee(float rs_val){
        this -> rs_val = rs_val;
    }
    void show(){
        cout << "\nRuppee value is : " << rs_val;
    }
    friend void conv_dtor(Dollar &o1, Ruppee &o2);
    friend void conv_rtod(Dollar &o1, Ruppee &o2);
};
void conv_dtor(Dollar &o1, Ruppee &o2){
    o2.rs_val = o1.dollar_val*dtor_crate;
}
void conv_rtod(Dollar &o1, Ruppee &o2){
    o1.dollar_val = o2.rs_val*rtod_crate;
}

int main(){
    float rs_val;
    float dollar_val;

    cout << "\n\nEnter Rs value for object : ";
    cin >> rs_val;
    Ruppee rs_obj(rs_val);
    Dollar dollar_obj(0);
    conv_rtod(dollar_obj, rs_obj);
    cout << "\nRs object value : ";
    rs_obj.show();
    cout << "\nDollar object value : ";
    dollar_obj.show();

    cout << "\n\nEnter Dollar value for object : ";
    cin >> dollar_val;
    Dollar dollar_obj1(dollar_val);
    Ruppee rs_obj1(0);
    conv_dtor(dollar_obj1, rs_obj1);
    cout << "\nDollar object value : ";
    rs_obj1.show();
    cout << "\nRs object value : ";
    rs_obj1.show();
}