#include<iostream>
#include<string>
using namespace std;

class Student{
    private:
        string name;
        string rollno;
        string department;
    public :
        void enter_detail();
        void display();
};
void Student::enter_detail(){
    cout<<endl;
    cout<<"Enter the name of the student : ";
    getline(cin,name,'\n');
    cout<<"Enter the Roll NO. of the student : ";
    getline(cin,rollno,'\n');
    cout<<"Enter the Department of the student : ";
    getline(cin,department,'\n');
}
void Student::display(){
    cout<<endl;
    cout<<"The name of the Student is : "<<name<<endl;
    cout<<"The Roll No. of the student is : "<<rollno<<endl;
    cout<<"The Department of the student is :"<<department<<endl;
}


int main(){
    Student s[5];
    for(int i =0;i<5;i++){
        cout<<endl<<"For student "<<i+1<<endl;
        s[i].enter_detail();
    }
    cout<<endl;
    cout<<"Displying the details of the student "<<endl;
    for(int i =0;i<5;i++){
        cout<<endl<<"For student "<<i+1<<endl;
        s[i].display();
    }

}