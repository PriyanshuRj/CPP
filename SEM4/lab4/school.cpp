#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int rollno;
    string name;
    float cgpi;
    int semester;
    Node *next;
};
void insert_data(struct Node *s, int n)
{
    struct Node *p = s;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the Name of student " << i + 1 << " : ";
        cin >> p->name;
        cout << "Enter the Roll Number of student " << i + 1 << " : ";
        cin >> p->rollno;
        cout << "Enter the CGPI of student " << i + 1 << " : ";
        cin >> p->cgpi;
        cout << "Enter the Semester of student " << i + 1 << " : ";
        cin >> p->semester;
        struct Node *n = new Node;
        n->next = NULL;
        p->next = n;
        p = p->next;
    }
}
void display(struct Node *s)
{
    struct Node *p = s;
    int i = 1;
    while (p->next != NULL)
    {
        cout << "Name of student " << i << " : " << p->name << endl;
        cout << "CGPI of student " << i << " : " << p->cgpi << endl;
        cout << "RollNO of student " << i << " : " << p->rollno << endl;
        cout << "Semester of student " << i << " : " << p->semester << endl;
        i++;
        p = p->next;
    }
}
void display_greater(struct Node *s, float k)
{
    struct Node *p = s;
    int i = 1;
    while (p->next != NULL)
    {
        if (p->cgpi > k)
        {
            cout << "Name of student " << i << " : " << p->name << endl;
            cout << "CGPI of student " << i << " : " << p->cgpi << endl;
            cout << "RollNO of student " << i << " : " << p->rollno << endl;
            cout << "Semester of student " << i << " : " << p->semester << endl;
        }
        i++;
        p = p->next;
    }
}
void insert_at_k (struct Node *s,int k){
    
    struct Node *p = s->next;
    int i = 1;
    while(p !=NULL){
        if(i == k-1){ 
            struct Node *n = new Node;
            n->next = p->next;
            p->next = n;
            cout<<"Enter the name : ";
            cin>>n->name;
            cout<<"Enter the CGPI : ";
            cin>>n->cgpi;
            cout<<"Enter the Roll Number : ";
            cin>>n->rollno;
            cout<<"Enter the semester : ";
            cin>>n->semester;
        }
        i++;
        p = p->next;

    }
    if()
}
int main()
{
    int length;
    cout << "Enter the no. of students in the class :" << endl;
    cin >> length;
    struct Node *students = new Node;
    students->next = NULL;
    insert_data(students, length);
    display(students);

    return 0;
}