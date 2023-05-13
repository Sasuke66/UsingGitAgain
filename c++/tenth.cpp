#include<iostream>
#include<fstream>
#include<stdio.h>
using namespace std; 

struct student{
    char name[40];
    int roll;
    char course[30];
}stud;

int main(){
    fstream o;
    o.open("stud.dat", ios::app|ios::binary);
    char ch = 'y';
    while(!o.eof()){
        o.read((char*) &stud, sizeof(stud));
        cout << "\nStudent name : " << stud.name;
        cout << "\nStudent Roll number : " << stud.roll;
        cout << "\nStudent course : " << stud.course;
        cout << "\nPress any key to continue...";
    }
    o.seekg(0, ios::beg);
    int rn;
    cout << "Enter number for access.";
    cin >> rn;
    student stud;
    cout << "\nRecord number : " << rn << "is available at" <<  (rn-1)*sizeof(stud);
    o.seekg((rn-1)*sizeof(stud),ios::beg);
    o.read((char*)&stud, sizeof(stud));
    cout << "\nStudent name : " << stud.name;
    cout << "\nStudent Roll number : " << stud.roll;
    cout << "\nStudent course : " << stud.course;
    o.close();
}