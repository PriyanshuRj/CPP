#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int size;
    int len;
    int data;
    struct Node *next;
};
void insert(struct Node *s, int ind, int data)
{
    struct Node *p = s;
    
    if (ind < 0)
        cout << "ERROR! wrong index use index greater than 0!" << endl;
    else
    {
        ind++;

        int c_ind = 1, flag = 0;
        while (p)
        {
            if (c_ind == ind)
            {
                struct Node *n = (struct Node *)malloc(sizeof(struct Node));
                n->data = data;
                n->next = p->next;
                p->next = n;
                flag = 1;
                cout << "Insertion succesfull !!" << endl;

                break;
            }
            p = p->next;
            c_ind++;
        }
        if (flag == 0)
        {
            cout << "Index out of range !!" << endl;
        }
    }
}
void delete_node(struct Node *s, int ind)
{
    struct Node *p = s;
    if (ind < 0)
        cout << "ERROR! wrong index use index greater than 0!" << endl;
    else
    {
        ind++;
        int c_ind = 1, flag = 0;
        while (p)
        {
            if (c_ind == ind)
            {
                struct Node *n = p->next;
                p->next = p->next->next;
                free(n);
                flag = 1;
                cout << "Deletion succesfull !!" << endl;
                break;
            }
            p = p->next;
            c_ind++;
        }
        if (flag == 0)
        {
            cout << "Index out of range !!" << endl;
        }
    }
}
void display(struct Node *s)
{
    struct Node *p = s->next;
    while (p)
    {
        cout << "The data at the node is : " << p->data << endl;
        p = p->next;
    }
}
int main()
{
    struct Node *nodes = new Node;
    int runstate =1;
    while (runstate)
    {
        cout << "1 for insertion\n2 for deletion\n3 for display\nelse for exiting\n\n";
        cout << "Enter your choice : ";
        int ch, num, ind;
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter the index of insertion : ";
            cin >> ind;
            cout << "Enter the data to be inserted : ";
            cin >> num;
            insert(nodes, ind, num);
            cout<<endl;
            break;
        case 2:
            cout << "Enter the index of deletion : ";
            cin >> ind;

            delete_node(nodes, ind);
            cout<<endl;
            break;
        case 3:
            display(nodes);
            cout<<endl;
            break;
        default:
            runstate = 0;
            break;
        }
    }
    return 0;
}