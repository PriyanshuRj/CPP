#include<bits/stdc++.h>
using namespace std;
struct Student{
    int rollno;
    int marks[3];
    int total;
};
void display(struct Student instance){
    cout<<"The student with Roll No. : "<<instance.rollno<<endl;
    for(int j =0;j<3;j++){

    cout<<"Has scored "<<instance.marks[j]<<" marks in subject "<<j+1<<endl;
    }
    cout<<"And his/her total is : "<<instance.total<<endl<<endl;
    
}
int main(){
    struct Student student_array[3];
    for(int i=0;i<3;i++){
        cout<<endl<<"Enter the Roll No. for student "<<i+1<<" : ";
        cin>>student_array[i].rollno;
        cout<<"Enter the Marks for student "<<i+1<<" in all 3 subjects  "<<endl;
        student_array[i].total = 0;
        for(int j=0;j<3;j++){
            cout<<"Enter the marsk for subject "<<j+1<<" : ";
            cin>>student_array[i].marks[j];
            student_array[i].total += student_array[i].marks[j];
        }
        
    }
    cout<<endl<<endl;
    for(int i=0;i<3;i++){
        display(student_array[i]);
    }
    return 0;
}