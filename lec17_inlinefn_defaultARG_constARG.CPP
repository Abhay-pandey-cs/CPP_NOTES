#include<iostream>
using namespace std;

    inline int product(int a, int b){
        return a*b;

    }
 void chargivencantchange(const char* p){
   // *p='h'; it is read only it is not possible cause its const
    cout<<p;
return;
 }

    //Default arguement at last only at extreme right
    float moneyrecieved(int money, float factor = 1.04){
        return money*factor;
    }
    int main(){
        int a,b;
        cout<<"enter the a and b"<<endl;
        cin>>a>>b;
        cout<<"the product of a & b in compile time by replaceing here itself in cache "<<product(a,b)<<endl;
        //note dont use in recursion, or large function 

        int money= 100000;
        cout<<moneyrecieved(money)<<endl;
        char t='j';
        chargivencantchange(&t);
    }
