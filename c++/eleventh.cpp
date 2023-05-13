#include<iostream>
#include<fstream>
#include<stdio.h>
using namespace std; 

int main(){
    ofstream o("File1.txt");
    char ch;
    cout << "\nEnter a paragraph to stop press .";
    while(ch!='.'){
        ch = getchar();
        o.put(ch);
    }
    o.close();
}