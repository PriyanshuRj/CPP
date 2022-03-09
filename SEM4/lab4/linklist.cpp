#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

void create_inserted_list(struct Node*s,int n){
    struct Node *p = s;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the data for node " << i + 1 << " : ";
        cin >> p->data;
        struct Node *n = new Node;
        n->next = NULL;
        p->next = n;
        p = p->next;
    }
}
void display(struct Node *s){
    struct Node *p = s;
    int i =0;
    while(p->next != NULL){
        cout<<"Data of the node : "<<i++<<" : "<<p->data<<endl;
        p = p->next;
    }
}
int main(){
    int length;
    cout << "Enter the no. of nodes : ";
    cin >> length;
    struct Node *node = new Node;
    create_inserted_list(node,length);
    cout<<endl<<endl;
    display(node);
}