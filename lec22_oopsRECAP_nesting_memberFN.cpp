#include <iostream>
#include <string>
using namespace std;

// oops is classes and obj
/*
c++ initall called c with classes by strostoup
class-->> extension of struct
struct had limitation it has no method(function) and members were public

classes--> structures + more
classes --->can have methods and properties
classes --> can make few members as private and public

we can declare object along with class declaration
e.g class employee{
//class defination
}harry,rohan,lovish;

we cant access private memeber directly



//NESTING OF MEMBER FUNCTION



*/

class binary {
    private: 
    string s;

public:
    void read(void);
    void check_binary(void);

};

void binary:: read(void){
    cout<<"ENTER A BINARY NUMBER"<<endl;
    cin>>s;
}
void binary::  check_binary(void){
    for(int i=0;i < s.length() ;i++){
        if(s.at(i)!='0' &&  s.at(i) !='1'){
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        } 
        else{
            cout<<"IT'S A BINARY "<<s<<endl;
        }

    }
}
int main()
{
binary b;
b.read();
b.check_binary();
return 0;




}