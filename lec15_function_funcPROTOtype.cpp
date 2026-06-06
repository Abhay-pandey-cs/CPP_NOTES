#include<iostream>
using namespace std;

int sum(int a, int b){
    int c= a+b;
    return c;
}

int multiply(int a,int b);
//function prototype gives assurity that it will come later 
// Num1 and num2 is actul parameter and a,b are formal parameter
 
//ACTUAL PARAMETER ==> CALLER SIDE KNOWN AS ARGUEMENT OR ACTUAL ARGUEMENT
//Formal parameter ==> reciever side known as formal arguement or parameter
void g (void);


int main(){
int num1, num2;
cout<<"enter first num"<<endl;
cin>>num1;
cout<<"enter second num:"<<endl;
cin>>num2;
cout<<"the sum is "<<sum(num1,num2)<<endl;
cout<<"THE MULTIPLY IS "<<multiply(num1,num2)<<endl;

g();
    return 0;


    // Num1 and num2 is actul parameter and a,b are formal parameter
}

int multiply(int a,int b){
    int c= a*b;
    return c;
}
void g(){
    cout<<"THIS IS PRINTED WITHIN VOID AS ITS RETURN NOTHING"<<endl;
}