#include<iostream>
#include<string>
using namespace std;

class bank_account{
    private:
        string name;
        string acc_number;
        string type;
        int balance_amount;
    public:
        void initialize(string n,string an,string t,int b);
        void deposite();
        void withdraw();
        void display();
};

// function to initalize the object
void bank_account::initialize(string n,string an,string t,int b){
    name = n;
    acc_number=an;
    type = t;
    balance_amount = b;
}

// function to deposite money to bank account
void bank_account::deposite(){
    int amount;
    cout<<"enter the amount you want to deposite : ";
    cin>>amount;
    balance_amount = balance_amount +amount;
    cout<<"Amount depsoted successfully !!"<<endl;
}

// function to withdraw money from bank account
void bank_account::withdraw(){
    int amount;
        cout<<"enter the amount you want to withdraw : ";
    cin>>amount;
    if(amount<balance_amount){
        balance_amount = balance_amount-amount;
        cout<<"Money withdraw successfull !!"<<endl;
    }
    else cout<<"Insufficient balance !!"<<endl;
}

// function to display the details of the bank account
void bank_account::display(){
    cout<<"The name of account user is : "<<name<<endl;
    cout<<"The balance amount in account is : "<<balance_amount<<endl;
}

int main(){
    bank_account acc[5];
    for(int i =0 ;i<5;i++){
        cout<<endl<<"Enter Details for account : "<<i+1<<endl;
        int condition = 1;
        string name;
        string acc_number;
        string type;
        int balance_amount;
        cout<<"Enter the name of account user : ";
        getline(cin,name,'\n');
        cout<<"Enter the account  number : ";
        getline(cin,acc_number,'\n');
        cout<<"Enter the type of account : ";
        getline(cin,type,'\n');
        cout<<"Enter the balance amount in account  : ";
        cin>>balance_amount;
        acc[i].initialize(name,acc_number,type,balance_amount);
        cout<<endl<<"You can perform the following opperations on your account : "<<endl;
        while(condition){
            cout<<endl<<"1 for deposite \n2 for withdraw \n3 for display\nelse for exit\n";
            cout<<"Enter your choice : ";
            int choice;
            cin >> choice;
            switch(choice){
                case(1):
                cout<<endl;
                acc[i].deposite();
                break;
                case(2):
                cout<<endl;
                acc[i].withdraw();
                break;
                case(3):
                cout<<endl;
                acc[i].display();
                break;
                default:
                condition=0;
                break;
            }
            cin.ignore(256, '\n');
        }
    }
}