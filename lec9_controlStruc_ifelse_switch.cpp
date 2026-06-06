//THERE ARE THREE KIND OF CONTROL STRUCTURE
/*
1) SEQUENCE STRUCTURE
2) SELECTON STRUCTURE
3)LOOP STRUCTURE
*/

#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"tell me your age"<<endl;
    cin>>age;

    // if else ladder
    if(age<18 && age>0){
        cout<<"You are a kid and cant vote"<<endl;
    }
    else if (age==18){
        cout<<"you are no more kid and on edge to be adult to vote"<<endl;
    }
    else if(age==0){
        cout<<"common kid you are just born get away"<<endl;
    }
    else if (age<0){
        cout<<"you are not born yet"<<endl;
    }
    else{
        cout<<"you can vote as you are adult"<<endl;
    }


    switch (age){
        case 18:
            cout<<"you are eligible to ride";
            break;
            
        case 22:
            cout<<"you are 22"<<endl;
            break;
        case 23:
            cout<<"your are 23"<<endl;
            break;
        default:
        cout<<"no special cases"<<endl;
        break;

    }
}