//PROGRAM part a of lecture 25;part b different program
//PROGRAM part a of lecture 25;part b different program
//PROGRAM part a of lecture 25;part b different program





#include<iostream>
using namespace std;

// will be having 2 program one for array of object, and other for passing object array as an arguement

//PROGRAM part a of lecture 25 ;part b different program
class complexNOcalc{
    int a;
    int b;

    public:
    
    void setData(int x, int y){
        a=x;
        b=y;
    }

    void AddComplexnumbers( complexNOcalc o1, complexNOcalc o2){ // formal arguement datatype is class name having passed obj passed as argument
        a= o1.a + o2.a;
        b= o1.b + o2.b;  // object.datamember // accessed like abhay.price do not get confused

    }

    void printComplex(){
        cout<<"THE COMPLEX NO FOR OBJECT IS "<<a<<" + "<<b<<"i "<<endl;

    }
};

int main(){
//PROGRAM part a of lecture 25;part b different program
   //PROGRAM part a of lecture 25; part b different program


    complexNOcalc c1,c2,c3;
    c1.setData(4,5);
    c1.printComplex();
    c2.setData(8,3);
    c2.printComplex();
    c3.AddComplexnumbers(c1,c2);
    c3.printComplex();
}