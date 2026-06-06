#include<iostream>
using namespace std;
int main(){
/*LOOP IN CPP
THERE ARE THREE TYPE OF LOOP IN CPP
1) FOR LOOP
2) WHILE LOOP
3) DO WHILE LOOP

FOR LOOP IN CPP
SYNTAX for(int i=intial val; condition; updation i++/i--or --i/i--)

WHILE LOOP IN  CPP

WHILE INTITALIZATION
WHILE(CONDITION){
EXECUTION
UPDATION }


DO WHILE LOOP IN CPP

INITIALIZATION
do {
will execute atleast once
} while(condition);

*/


for(int i=0;i<20;i++){
cout<<i+1;
}
cout<<endl;


int a=1;
while(a<=10){
    cout<<2*a<<endl;
    a+=1;
}

int c=1;
do{
    cout<<5*c<<endl;
c+=1;
}while(c<=10);



}