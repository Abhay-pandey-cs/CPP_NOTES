#include<iostream>
using namespace std;
 void swap(int a, int b){//DOES NOT SWAP 
    //cALL BY VALUE
    int temp = a;
    a= b;
    b= temp;
 }   
 void swapPointer(int *a, int *b){
    //CALL BY REFERENCE USING POINTER DOES SWAP
    int temp = *a;
    *a=*b;
    *b=temp;
 }
 void swapCppRefernceMETHOD(int &a, int &b){
    //CALL BY REFERENCE USING CPP REFERECE DOES SWAP
    // USED IN LEC 7

    int temp = a;
    a=b;
    b=temp;
 }

 int main(){
    int x=4,y=3,f=94,g=23,i=34,j=47;
    cout<<x<<" "<<y<<" "<<f<<" "<<g<<" "<<i<<" "<<j<<endl;
    swap(x,y);
    swapPointer(&f,&g);
    swapCppRefernceMETHOD(i,j);
     cout<<x<<" "<<y<<" "<<f<<" "<<g<<" "<<i<<" "<<j<<endl;

 }
