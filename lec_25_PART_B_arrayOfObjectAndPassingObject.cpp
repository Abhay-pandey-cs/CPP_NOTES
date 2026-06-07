#include<iostream>
using namespace std;
//PART B OF 25 ;ARRAY OF OBJECT
//PART B OF 25 ;ARRAY OF OBJECT
//PART B OF 25 ;ARRAY OF OBJECT
//PART B OF 25 ;ARRAY OF OBJECT


class arrOFobj{
int a;
int b;
int c;
public :
    void setData(){
        cout<<"ENTER 3 VALUE A, B, C as"<<endl;
        cin>>a>>b>>c;
        
    }
    void DisplaysumofDATAofCURRENTobject(){
        cout<<"The sum of data for the object is "<<a+b+c<<"\n";
    }
};
int main(){
    arrOFobj obj[5];

    for(int i=0;i<5;i++){
        obj[i].setData();
    }
    for(int i=0;i<5;i++){
        obj[i].DisplaysumofDATAofCURRENTobject();
    }

}