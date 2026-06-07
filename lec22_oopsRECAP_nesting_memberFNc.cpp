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
     
    string s;//by default private
    void check_binary(void);
public:
    void read(void);
  
    void onescomplement(void);
};

void binary:: read(void){
    cout<<"ENTER A BINARY NUMBER"<<endl;
    cin>>s;
}
void binary::  check_binary(void){
    for(int i=0;i < s.length() ;i++){
        if(s.at(i)!='0' &&  s.at(i) !='1'){
            cout<<"Incorrect binary format"<<endl;
            exit(0);//exit whole program
        } 
        

    }

            cout<<"IT'S A BINARY "<<s<<endl;
        
}
void binary:: onescomplement(void){
    check_binary();// written without dot operator with object
        for(int i=0;i<s.length();i++){
            if(s.at(i) == '0'){
                s.at(i)='1';
            
            }
            else if (s.at(i)=='1'){
                s.at(i)='0';
            }
            else{
                cout<<"INVALID";
                return;
            }
        }
        cout<<"NEW BINARY AFTER COMPLEMENT "<<s<<endl;
}
int main(){
binary b;
b.read();
//b.check_binary(); we placed inside ones's complement nested
// also we kept it private hence main -> public --> private
b.onescomplement();

return 0;




}