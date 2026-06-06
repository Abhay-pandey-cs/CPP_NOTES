#include<iostream>
#include<bits/stdc++.h>
using namespace std;

    
int sum(int a,int b){
    cout<<"using func 1"<<endl;
    return a+b;
}
int sum(int a, int b, int c){
    cout<<"using func 2"<<endl;
    return a+b+c;
}



int volume (int r, int h){
    cout<<"cylinder";
    return 3.14 *r*r*h;
}
int volume (int l, int b, int h){
    cout<<"\n cuboid";
    return l*b*h;
}
int volume(int a){
    cout<<"\n cube"<<endl;
    return a*a*a;
}
int main(){
cout<<sum(3,5)<<endl;
cout<<sum(5,3,2)<<endl;
cout<<volume(3)<<endl;
cout<<volume(4,3)<<endl;
cout<<volume(3,5,3)<<endl;


    return 0;
}