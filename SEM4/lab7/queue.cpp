#include<bits/stdc++.h>
using namespace std;
class Queue{
    private:
        int length;
        int *q;
        int front;
        int rear;
    public:
        Queue(int length){
            this->length = length;
            this->q = new int[length];
            this->front = -1;
            this->rear = -1;
        }
        void insertion(){
            if(++this->front <this->length){
                cout<<"Enter the element at index "<<this->front<<" : ";
                cin>>this->q[this->front];
            }
            else cout<<"Queue overflow !!"<<endl<<endl;
            if(this->front>-1 && this->rear==-1){
                this->rear = 0;
            }
        }
        int deletion(){
            if(this->rear>this->front || this->rear == -1){
                cout<<"Queue under flow !!!"<<endl;
                return -1;
            }
            int element = this->q[this->rear];
            this->q[rear] = NULL;
            this->rear++;
            return element;
        }
        void display(){
            if(this->rear>this->front || this->rear == -1){
                cout<<"Queue under flow !!!"<<endl;
                return;
            }
            for(int i = this->rear;i<=this->front;i++){
                cout<<"The element at index "<<i<<" is : "<<this->q[i]<<endl;
            }
        }

};
int main(){
    int len;
    cout<<"Enter the max length of the queue : ";
    cin>>len;
    Queue queue(len);
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
                if(e != -1 )  cout<<"Element dequed is : "<<e<<endl;
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