#include<iostream>
using namespace std;

class Animal {
  public:
    void animalSound() {
      cout << "The animal makes a sound \n";
    }
};

// Derived class
class Pig : public Animal {
  public:
    void animalSound() {
      cout << "The pig says: wee wee \n";
    }
};

// Derived class
class Dog : public Animal {
  public:
    void animalSound() {
      cout << "The dog says: bow wow \n";
    }
};

int main(){
    Animal ob1;
    Dog ob2;
    Pig ob3;
    
    ob1.animalSound();
    ob2.animalSound();
    ob3.animalSound();
}