#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
using namespace std;
//class account declaration and definition
class account
{
public:
    char name[30];
    int acc_num, acc_type;
    int balance;
    int amount;

    //to initialize instance members
    void getData()
    {
        cout << "\nEnter the following details\nCustomer Name :";
        gets(name);
        cout << "\nAccount number :";
        cin >> acc_num;
        cout << "\nAccount type\n1. Saving Account\n2.Current Account\n";
        cin >> acc_type;
        cout << "\nAccount balance:";
        cin >> balance;
    }

    //to display balance
    void display()
    {
        cout << "\nYour Account Balance :" << balance;
    }

    //to withdraw money from account
    void withdraw()
    {
        cout << "\nEnter the amount you want to withdraw :";
        cin >> amount;
        if (amount > balance)
            cout << "\nInsuficient balance";
        else
            balance = balance - amount;
        display();
    }
};

//class current account
class cur_acct : public account
{
public:
    void panelty()
    {
        if (balance < 200 && acc_type == 2)
        {
            balance = balance - 20;
            display();
        }
    }
};

//class saving account
class sav_acct : public account
{
public:
    void interest()
    {
        int t;
        cout << "\nEnter time interval in year:";
        cin >> t;
        balance = balance * (1 + 2 * t);
        display();
    }
};

//main() to test account
int main()
{

    account ac;
    ac.getData();
    ac.display();
    ac.withdraw();
    getch();
}




        if(acc_type == 1){
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
            else loop_logic = false;

            
        }