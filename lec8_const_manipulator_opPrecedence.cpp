#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a = 34;
    cout<<"the value of a was :"<<a<<endl;
    a=23;
    cout<<"the value of a is : "<<a<<endl;

    // constant in cpp
    const int b=3;//it cant be changed later on
    cout<<"the value of b was and will be "<<b<<endl;


//MANIPULATORS IN CPP ARE ENDL AND SETW()
//setw() used with iomanip

int d= 34,e=233,f=2424;
cout<<"the value of d without setw is : "<<d<<endl;
cout<<"the value of e without setw is : "<<e<<endl;
cout<<"the value of f without setw is : "<<f<<endl;

cout<<"the value of d with setw is : "<<setw(4)<<d<<endl;
cout<<"the value of e with setw is : "<<setw(4)<<e<<endl;
cout<<"the value of f with setw is : "<<setw(4)<<f<<endl;

//OPERATOR PRECEDENCE --> CHECK CPP REFERENCE WEBSITE
int o= 3,k=4;
int y= f*k-45+45/k;
cout<<"the value of y:"<<y<<endl;
}