#include <bits/stdc++.h>
using namespace std;
struct personal
{
    string name;
    string date;
    int salary;
};

union Employee
{

    char Name[25];
    char Date[25];
    int Salary;
};

void display(struct personal object)
{
    cout << "The name of the employee is " << object.name << endl;
    cout << "The date of joining of the employee is " << object.date << endl;
    cout << "The salary of the employee is " << object.salary << endl;
}

void display_union(union Employee object)
{
    cout << "The name of the employee is " << object.Name << endl;
    cout << "The date of joining of the employee is " << object.Date << endl;
    cout << "The salary of the employee is " << object.Salary << endl;
}

int main()
{
    
    struct personal employee1;

    cout<<"Enter the Name for the employ :";
    cin>>employee1.name;
    cout<<"Enter the date for the joining of the employee "<<endl;
    cout<<"Date :";
    string date,month,year;

    cin>>date;
    cout<<"Mouth :";
    cin>>month;
    cout<<"Year :";
    cin>>year;
    employee1.date = date + " : " + month + " : " + year;
    cout<<"Enter tne salary of the employee in rupees :";
    cin>>employee1.salary;
    cout<<"The data of  personal is as follows :"<<endl;
    display(employee1);
    cout<<endl<<"Now by using union"<<endl;

    Employee Employ;

    cout << "\n\nEnter Employee Name : ";
    cin >> Employ.Name;
    cout<<endl<<"Displaying the data of the personal after adding name using union : "<<endl;
    display_union(Employ);
    cout<<endl;
    cout<<"Enter the date in DD/MM/YYYY format" << endl;
    cout<<"Enter the date for the joining of the employee : ";
    cin>>Employ.Date;
    cout<<endl<<"Displaying the data of the personal after adding date using union : "<<endl;
    display_union(Employ);
    cout<<endl;
    cout<<"Enter tne salary of the employee in rupees :";
    cin >> Employ.Salary;
    cout<<"Displaying the final data of the personal using union : "<<endl;
    display_union(Employ);
    cout<<endl<<"As we can see in the union only the value of most recentedly added member is stored correctly rest all are corupted";

    

    return 0;
}