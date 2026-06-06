#include<iostream>
using namespace std;
/* There are two type of header file 
system and user defined 
where system comes with compiler e.g #include<iostream>
and e.g for user defined #include "this.h>
so this.h should exist as file


to view all heaer file , key word etc 
visit cpp reference website"*/
int main(){
    cout<<"This is hello world program"<<endl;
    cout<<"these are the type of operator in cpp \n";
    //assignment operator --> assigns the value
    int a= 40, b=2;
    
    //ARITHMETIC OPERATOR
    cout<<"the value of a+b is  "<<a+b<<endl;
     cout<<"the value of a-b is "<<a-b<<endl;
      cout<<"the value of a*b is "<<a*b<<endl;
       cout<<"the value of a/b is "<<a/b<<endl;
        cout<<"the value of a5b is "<<a%b<<endl;
 cout<<"the value of ++b is "<<++b<<endl;

//comparison operator
cout<<"The value of a==b"<<(a==b)<<endl;
cout<<"The value of a!=b"<<(a!=b)<<endl;
cout<<"The value of a<=b"<<(a<=b)<<endl;
cout<<"The value of a>=b"<<(a>=b)<<endl;
cout<<"The value of a<b"<<(a<b)<<endl;
cout<<"The value of a>b"<<(a>b)<<endl;

//logical operator
cout<<"the vlaue of logical and operartor && "<<((a==b) && (a>b)) <<endl;
cout<<"the value of logical or operator ||"<<((a<=b) || (a>=b)) <<endl;
    return 0;
    // endl and \n print to new line
}