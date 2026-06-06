#include<iostream>
using namespace std;
int globalvar=99;
void sukm(){
    cout<<globalvar;

}
int main(){
    cout<<"This is tutorial 4\n";
    // here to make line break we have used \n
    int a= 4,b=5;
    int sum= a+b;
    cout<<sum;
    cout<<"\nThe value of a is: "<<a;
    cout<<"\nThe value of b is : "<<b;
    float pi= 3.14;
    char c='t';
    cout<<"\n the value of pi is "<<pi;
    cout<<"\n the value of c is "<<c;
int globalvar=44;
cout<<"\n"<<globalvar<<"\n";
    sukm();
    bool gg_tt= 1;
    bool gg_ff =0;
    cout<<"\n"<<gg_tt<<" "<<gg_ff;
}