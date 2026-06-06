#include<iostream>
using namespace std;
int factorial(int a){
    if(a==0){
        return 1;
    }
    return a* factorial(a-1);
}
int fibonacii(int n){//at nth position
    //1,1,2,3,5,8,13,21,34........ 
    if(n<2){
        return n;

    }
    return fibonacii(n-2)+fibonacii(n-1);
}
int main(){
    //Recursion is to keep calling itself multiple time repeatadly until and unless base
    //conditon is met .

    //e.g factorial 6!= 6*5*4*3*2*1=720
    //0!=1
    //1!=1

    int a,n;

    cout<<"Enter the number a for fact and nth term for fibonacii"<<endl;
    cin>>a>>n;
    cout<<"factorial of a " <<factorial(a)<<endl;
    cout<<"fibonacii at nth term "<<fibonacii(n)<<endl;

    
}