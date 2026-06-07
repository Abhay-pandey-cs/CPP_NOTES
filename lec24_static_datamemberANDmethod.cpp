#include<iostream>
#include<string>
using namespace std;


/* In this prog i will be creating data member and function . 
static data member remain common for all object // can be accessed through
.dot operator with object or static fn directly from main

static fn can only access static datamember or fn , and called from
main fn without reffering object*/
class Employee{
    int id;
    static int count; // needed to initilise outside the class
    public:
        void setData(void){
            cout<<"ENTER THE ID"<<endl;
            cin>>id;
            count++;
        }
        void getData(void){
            cout<<"THE CURRENT COUNT ACCESSED THROUG OBJECT WITH DOT OPERATOR IS "<<count<<endl;

        }
        static void getCount(void){
            cout<<"The current count accessed through main fn using static fn without object"<<count<<endl;
            //static fn can only access static data member and static fn;
        }

}abhay,nitish,kajal;

int Employee:: count; // by default initilsed 0
//e.g int Employee::count =1000;








int main(){

    abhay.setData();
    abhay.getData();

    kajal.setData();
    kajal.getData();

    nitish.setData();
    nitish.getData();

    Employee::getCount(); //static fn accesed without object outside from main fn

}