#include<iostream>
using namespace std;
int c=45;
int main(){
    int a,b,c;
    cout<<"Enter the value of a: "<<endl;
    cin>>a;
    cout<<"enter the value of b: "<<endl;
    cin>>b;
    c=a+b;
    cout<<"the sum is c "<<c<<endl;
    //to return the gloabal value use scope resolutiono operator
    cout<<"the value of global c"<<::c<<endl;
    cout<<"the value of b is"<<b<<endl<<"the value of c is "<<c;

    float d= 34.5f;
    long double e= 32.3l;
    float h= 433.4;

    //cpp treats decimal value as long by default to make it treat
    // as float write f at last e.g 34.5f
cout<<"the value of d"<<d<<" "<<sizeof(d)<<endl;
cout<<"the value of e"<<e<<" "<<sizeof(e)<<endl;
cout<<"the value of h"<<h<<" "<<sizeof(h)<<endl;

cout<<"the value of 34.4"<<" "<<sizeof(34.4)<<endl;
cout<<"the value of 34.4f"<<" "<<sizeof(34.4f)<<endl;
cout<<"the value of 34.4F"<<" "<<sizeof(34.4F)<<endl;
cout<<"the value of 34.4l"<<" "<<sizeof(34.4l)<<endl;
cout<<"the value of 34.4L"<<" "<<sizeof(34.4L)<<endl;


/////////////////////////////////////////////////
// *************Reference variable*****************
/*abhay is shubham , shubhu , abhii*/
float vari = 455;
float & y = vari;
cout<< vari <<endl;
cout<<y<<endl;// same thing just different name its not a copy





//********TYpe castinng****** */
int ia= 45;
float ib= 43.24;
cout<<"The value of ia is "<<float(ia)<<endl;
cout<<"th3e value of ia is"<<(float)ia<<endl;

cout<<"the value of ib is "<<int(ib)<<endl;
cout<<"The value of ib is "<<(int)ib <<endl;

int i= int(b);
cout<<"the i is "<<i;
cout<<"the expression is"<<ia + ib<<endl;
cout<<"the expression is" << ia + int(ib)<<endl;
cout<<"the expression is "<<ia + (int)ib<<endl;
}

