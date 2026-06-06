/*
Break exists the loop or if condition
continue skip the iteration to another one


*/

#include<iostream>
using namespace std;
int main(){
    for (int i=2;i<40;i+=5){
        if(i%2==0){
            cout<<i<<" c:"<<endl;
            continue;
        }
        if(i%3==0){
            cout<<i<<" b:"<<endl;
            break;
        }
    }
}