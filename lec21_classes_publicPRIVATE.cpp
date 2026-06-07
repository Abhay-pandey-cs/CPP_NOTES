#include<iostream>
#include<string>
using namespace std;

   /* Banking implementaion with classes using public and private acess specifier
   in this i will be making 3 private data member and 5 public data member.
   and i will be accessing them through main --> public -->private
     so public data member would be 
     customer id, name , customer loan month left , loan type , loan status
     private data member would be 
     customer balance , customer loan due */ 

class Banking{
    private:
        float cust_balance;
        float cust_loan_due;
       
    public:
        int cust_id;
        int cust_loan_monthLEFT;
        string loan_type;
        bool loan_status;
        string cust_name;

        void setdata( float CB, float CLD){
            cust_balance=CB;
            cust_loan_due=CLD;
            
             if (cust_loan_due<=0){
                bool loan_status = 0;
            }
        }
        void BalanceUpdate(int CRorDB_CB){
            cust_balance += CRorDB_CB;
            
        }
        void Loandue(float redLD, int months);/*will declare out of class to show prototype method , as we have seen declaration within
class for balance update as both are private;*/

        void getdata(){
           if (cust_loan_due<=0){
                bool loan_status = 0;
            }
            cout<<"-----------REPORT START---------->"<<endl;
            cout<<cust_id<<" i.e "<<cust_name<<" has a loan of "<<loan_type<<" is due "<<cust_loan_due<<" is to be paid by ";
           cout<<cust_loan_monthLEFT<<" months ";
            if(loan_status==0){
                cout<<"COMPLETED"<<endl;
            }
            else{
                cout<<"ONGOING"<<endl;
            }
            cout<<"CUSTOMER "<<cust_id<<" "<<cust_name<<" has a loan balance "<<cust_balance<<endl;
            cout<<"----------REPORT FINISH----------->"<<endl;
            cout<<endl;
        }
};

void Banking :: Loandue(float redLD, int months){
            cust_loan_due -= redLD;
            cust_balance -= redLD;
            cust_loan_monthLEFT-=months;
        }




     int main(){

        Banking abhay;
        abhay.cust_id = 123;
        abhay.cust_loan_monthLEFT= 4;
        abhay.loan_type="HOME";
        abhay.cust_name="ABHAY PANDEY";
        abhay.setdata(1100000,1600000);
        abhay.BalanceUpdate(-34300);
        abhay.getdata();

        abhay.BalanceUpdate(-90399);
       
        abhay.getdata();
        abhay.Loandue(400000,1);// will deduct balance too;
         abhay.getdata();

return 0;


}
