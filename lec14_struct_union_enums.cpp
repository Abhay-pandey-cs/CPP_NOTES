#include<iostream>
using namespace std;


struct employee{
    int eid;
    char favchar;
    float salary;
};



union money{
    int rice;//4
    char currency;//1
    float rupee;//4
    //uses 1 at a time as memory is being shared
    //Can have only 1 instance with 1 attribute
    //earlier one would be over write and give garbage
    //alue 
};
int main(){
struct employee abhay;
abhay.eid=2;
abhay.favchar='c';
abhay.salary= 3440000;
cout<<"the value is"<<abhay.eid<<endl;
cout<<"the value is "<<abhay.favchar<<endl;
cout<<"the value is "<<abhay.salary<<endl;


// union is like struct but proviide better memory managemet of memory
//to share memory among all attribute
union money shubh;
union money nitish;
shubh.rice=44;
shubh.currency= 'f';
cout<<"garbage as it is earlier and overwrite by currency "<<shubh.rice<<endl;
cout<<"give overwritten value i.e correctly for latest "<<shubh.currency<<endl;
nitish.rice=23;
cout<<"give correct as its not overwritten "<<nitish.rice<<endl;



//enum is a special data type used to define collection of related fixed const

enum Meal{ breakfast, lunch,dinner};
cout<<"it will return index "<<breakfast<<" "<<lunch<<" "<<dinner<<endl; 
Meal m1= lunch;
Meal m2=breakfast;
cout<<(m1==1)<<endl;
cout<<(m2==0)<<endl;
    return 0;
}