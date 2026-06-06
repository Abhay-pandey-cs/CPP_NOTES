#include<iostream>
using namespace std;
int main(){
// what is pointer ? === data type which holds the address
// of other data typers

int a=3;
int*b = &a;
// & --> address of operator
// * ---> derefernce operator

//to return address
cout<<&a<<" "<<b<<endl;

//to return value at this address
cout<<*b<<" "<<a<<endl;

// pointer to pointer --> store the addreess of other pointer

int **c= &b;
cout<<"the address of b "<<&b<<endl;
cout<<"the addreess of b "<<c<<endl;
cout<<"the value at address c is "<<*c<<endl;
cout<<"the value at addreess valueat c is "<<**c<<endl;

    return 0;
}