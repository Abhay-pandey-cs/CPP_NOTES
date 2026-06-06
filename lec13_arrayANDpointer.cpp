#include<iostream>
using namespace std;
int main(){

int marks[]={23,43,54,23};
cout<<marks[0]<<endl;
cout<<marks[1]<<endl;
cout<<marks[2]<<endl;
cout<<marks[3]<<endl;

int mathMARKS[4];
mathMARKS[0]=453;
mathMARKS[1]=545;
mathMARKS[2]=944;
mathMARKS[3]=353;

for(int i=0;i<4;i++){
    cout<<"mathmarks " << mathMARKS[i]<<endl;
}
mathMARKS[2]=422;// CHANGING THE VALUE AT ANY INDEX
cout<<"CHANGED mathMARKS "<<mathMARKS[2]<<endl;

int evennum[8];
int d=0,e=0;
while(e<8){
    evennum[e]=d;
    d+=2;
    e+=1;

}
int o=0;
do{
    cout<<"even value at index"<<o<<" " <<evennum[o]<<endl;
    o+=1;
}while(o<8);




//POINTERS AND ARRAYS
int* p = marks;

cout<<"the value of marks[0] derefrenced as *p"<<*p<<endl;
cout<<"the value at marks[1] derefrened as *(p+1)"<<*(p+1)<<endl;
cout<<"the value at marks[2] dereferenced *(p+2) "<<*(p+2)<<endl;
cout<<"the value at marks[3] dereferenced *(p+3)"<<*(p+3)<<endl;

cout<<*(p++)<<" "<<*p<<endl;
--p;
cout<<*(p++)<<" "<<*(++p)<<endl;













    return 0;


}