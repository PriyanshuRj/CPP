#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};
class Queue{
    private:
        int len;
        int flag;
        struct Node *q;
        struct Node *front;
        struct Node *rear;
    public:
        Queue(){
            this->len = 0;
            this->flag = 0;
            this->q = new struct Node;
            this->q->data = NULL;
            this->q->next = NULL;
            this->front = new struct Node;
            this->rear = new struct Node;
            this->front = this->q;
            this->rear = this->q;

        }
        void insertion(){
    
            
            struct Node *next = new struct Node;
            if(next){
                cout<<"Enter the element at index "<<this->len++<<" : ";
                cin>>next->data;
                next->next = NULL;
                this->front->next = next;
                this->front = this->front->next; 
                this->flag = 0;
            }  
            else cout<<"Queue overflow !!"<<endl<<endl;
            if(len==1){
                this->rear = this->rear->next;
            }
        }
        int deletion(){
            if(this->front == this->rear){
                cout<<"Queue under flow !!!"<<endl<<endl;
                this->flag = 1;
                return -1;
            }
            struct Node *element = this->rear;
            int data = element->data;
            // free(element);
            this->rear = this->rear->next;
            return data;
        }
        void display(){
            if(flag == 1){
                cout<<"Queue under flow !!!"<<endl<<endl;
                return;
            }
            struct Node *element = this->rear;
            while(element){
                cout<<"The element is : "<<element->data<<endl;
                element = element->next;
            }

           
        }

};
int main(){
    Queue queue;
    int cond = 1;
    while(cond){
        int selector;
        cout<<"1 for insertion\n2 for deletion\n3 for display\nelse for exit";
        cout<<"Select one operation :::::::::::::"<<endl;
        cin>>selector;
        int e;
        switch(selector){
            case 1:
                queue.insertion();
                break;
            case 2:
                e = queue.deletion();
                if(e != -1 ) cout<<"Element dequed is : "<<e<<endl;
                break;
            case 3:
                queue.display();
                break;
            default:
                cond = 0;
                break;
        }

    }

    return 0;
}