#include<iostream>
#include<math.h>
using namespace std;

class Bank_Acc{
    protected :
        string user;
        double balance;
        long long Acc_number;
        int Acc_type;

    public :
     Bank_Acc(string u, double b,long long an,int at){
         user = u;
         balance = b;
         Acc_number = an;
         Acc_type = at;
     }
     void Display(){
         cout<<"Name of the User : "<<this->user<<endl;
         cout<<"Balance : "<<this->balance<<endl;
     }
     virtual void withdraw() = 0;
};
class Saving_Acc : public Bank_Acc{
    private : 
        float intrest;
    public :
        Saving_Acc(float intrest, string u, double b,long long an) : Bank_Acc(u,b,an,1){
            this->intrest = intrest;
        }
        void withdraw(){
            int amount;
            cout<<"Enter the amount you want to withdraw : ";
            cin>>amount;
            if(this->balance > amount ){
                this->balance = this->balance - amount;
            }
            else cout<<"Sorry we cant proccess your request insufficient balance !!"<<endl;
            return;
        }
        void intrest_update();
        

};
class Current_Acc : public Bank_Acc{
    private : 
        double min_bal;
        double service_fee;
    public :
        Current_Acc( double min_bal,double service_fee,string u, double b,long long an) : Bank_Acc(u,b,an,2){
            this->min_bal = min_bal;
            this->service_fee = service_fee;
            service_deduction();
        }
        void service_deduction();
        Current_Acc checkbook_facility(Current_Acc acc, float amount);
        void withdraw();
        
};
void Saving_Acc :: intrest_update(){
    int time;
    cout << "\nEnter time interval in year : ";
    cin >> time;
    balance = balance *pow((1 + intrest),time);
}


void Current_Acc::service_deduction(){
    if(this->balance<this->min_bal && this->Acc_type ==2){
        this->balance = balance - this->service_fee;
        return;
    }
}
void Current_Acc::withdraw(){
    int amount;
    cout<<"Enter the amount you want to withdraw : ";
    cin>>amount;
    if(this->balance > amount ){
        this->balance = this->balance - amount;
    }
    else cout<<"Sorry we cant proccess your request insufficient balance !!"<<endl;
    service_deduction();
    return;
}
Current_Acc Current_Acc::checkbook_facility(Current_Acc acc, float amount){
    if(acc.balance > amount){
        this->balance = this->balance + amount;
        acc.balance = acc.balance - amount;
    }
    else{
        cout<<"Check bounced the sender had insuffiient balance !!"<<endl;
    }
    return acc;
}

int main(){
    cout<<"Thanks for chosing our program !!"<<endl;
    bool loop_logic = true;

    while(loop_logic){
        int acc_type;
        cout<<"\n1 for saving\n2 for current\nelse for exit\n";
        cout<<"Chose your account type : ";
        cin>>acc_type;
        if(acc_type == 1){
            string name;
            double balance;
            long long acc_num;
            float intrest = 0.4;
            cout<<"Enter your name : ";
            cin>>name;
            cout<<"Enter account number : ";
            cin>>acc_num;
            cout<<"Enter balance : ";
            cin>>balance;
            Saving_Acc sv_acc(intrest,name,balance,acc_num);
            bool loop_logic_sv = true;
            while(loop_logic_sv){
                int sv_ch;
                cout<<"\n\n1 for intrest update\n2 for withdraw\n3 for display account data\nelse for exit\n\n";
                cout<<"Enter your choice : ";
                cin>>sv_ch;
                if(sv_ch == 1) sv_acc.intrest_update();
                else if(sv_ch == 2) sv_acc.withdraw();
                else if(sv_ch == 3) sv_acc.Display();
                else loop_logic_sv = false;
            }

            
        }
        else if(acc_type == 2){
                        string name;
            double balance,sf = 500,mb;
            long long acc_num;
    
            cout<<"Enter your name : ";
            cin>>name;
            cout<<"Enter account number : ";
            cin>>acc_num;
            cout<<"Enter balance : ";
            cin>>balance;
            cout<<"Enter minimum balance : ";
            cin>>balance;
            Current_Acc ca_acc(sf,mb,name,balance,acc_num);
            int ca_ch;
            bool loop_logic_ca = true;
            while(loop_logic_ca){
                cout<<"\n1 for checkbook facility\n2 for withdraw\n3 for display account data\nelse for exit\n";
                cout<<"Enter your choice : ";
                cin>>ca_ch;
                if(ca_ch == 1){
                    string sname;
                    double sbalance,sf = 500,smb = 500;
                    long long sacc_num = 5276435712437614378;
                    float amount;
                    cout<<"Enter senders name : ";
                    cin>>sname;
                    cout<<"Enter senders balance : ";
                    cin>>sbalance;
                    cout<<"Enter the amount of cheque : ";
                    cin>>amount;
                    Current_Acc sender(sf,mb,name,balance,acc_num);
                    ca_acc.checkbook_facility(sender,amount);

                }
                else if(ca_ch == 2) ca_acc.withdraw();
                else if(ca_ch == 3) ca_acc.Display();
                else loop_logic_ca = false;
        }
        }
        else loop_logic = false;
    }
}