#include<iostream>
#include<string>

using namespace std;
// using array in the classes

class attendance{
    public:
        string date[30];
        string student_status[30];
        int counter;
    
    void initcounter(void){// its not necessary to write init we wrote it as it is a initialisation short name
        counter =1; /* will set counter =0 at when called usually once through
        main function*/

    }
    void setDate(void);
    void setStudStatus(void);
    void displayStudDetails(void);

};

void attendance :: setDate(void){
    
        cout<<"enter the date in dd/mm/yyyy format"<<endl;
        cin>>date[counter];
        

    counter++;
    
}
void attendance:: setStudStatus(void){
    
        cout<<"enter the "<<counter<<" attendance p or a"<<endl;
        cin>>student_status[counter];
    
    setDate();
    
}
void attendance:: displayStudDetails(void){
     cout<<"ATTENDANCE STATUS of total "<<counter+1<<" students"<<endl;
    for(int i=0;i<counter;i++){
       cout<<"student has attendance on "<<date[i]<<" as "<<student_status[i]<<endl;
    }
}


int main(){
attendance abhay;
abhay.initcounter();
abhay.setStudStatus();
abhay.setStudStatus();
abhay.setStudStatus();
abhay.setStudStatus();
abhay.setStudStatus();

abhay.displayStudDetails();

}