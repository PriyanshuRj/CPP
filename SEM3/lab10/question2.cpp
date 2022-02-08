#include <iostream>
using namespace std;
template <typename T>
class Stack
{
    private:
        int size;
        T *stack;
        int head;

    public:
        Stack(int size)
        {
            this->size = size;
            stack = new T[size];
            head = -1;
        }
        void push(T value);
        void pop();
        void display();
};

template <typename T>
void Stack<T>::push(T value){
    if(head >= size){
        cout<<"ERROR: Stack Overflow!"<<endl;
        return;
    }
    stack[++head] = value;
    return;
}
template <typename T>
void Stack<T>::pop(){
    if(head == -1){ cout<<"ERROR: Stack Underflow!"<<endl;}
    else{ 
        T val = stack[head];
        stack[head--] = 0;
        cout<<"Element poped : "<<val<<endl;

    
    }
}

template <typename T>
void Stack<T>::display(){
    if(head == -1) { cout<<"ERROR: Stack Underflow!"<<endl;return;}
    else{
        for(int i =0;i<=head;i++){
            cout<<"Value at position "<<i<<"is : "<<stack[i]<<endl;
        }
    }
}

template <typename T>
class Queue
{
    private:
        int size;
        T *queue;
        int start;
        int end;

    public:
        Queue(int size)
        {
            this->size = size;
            queue = new T[size];
            start = -1;
            end = -1;
        }
        void enque(T value);
        void dequeue();
        void display();
};

template <typename T>
void Queue<T>::enque(T value){
    if(end >= size){
        cout<<"ERROR: Queue Overflow!"<<endl;
        return;
    }
    queue[++end] = value;
    return;
}
template <typename T>
void Queue<T>::dequeue(){
    if(end == -1){ cout<<"ERROR: Queue Underflow!"<<endl;}
    else{ 
        T val = queue[start];
        cout<<"Element dequed : "<<val<<endl;
        queue[start++] = 0;
    }
}

template <typename T>
void Queue<T>::display(){
    if(end == -1) { cout<<"ERROR: Stack Underflow!"<<endl;return;}
    else{
        for(int i =start;i<=end;i++){
            cout<<"Value at position "<<i<<" is : "<<queue[i]<<endl;
        }
    }
}
int main(){
    int size;
    cout<<"Enter the size for stack : ";
    cin>>size;
    cout<<endl<<"For intigers"<<endl;
    Stack<int> stack(size);
    int ans = true;
    while(ans){
        int ans;
        cout<<"1. for push\n2. for pop\n3. for display\nElse for exit\n";
        cout<<"Enter your choice : ";
        cin>>ans;
        if(ans == 1){ 
            int val;
            cout<<"Enter the value : ";
            cin>>val;
            stack.push(val);
        }
        else if(ans == 2){
            stack.pop();

        }
        else if(ans ==3){
            stack.display();
        }
        else{
            ans = false;
        }
    }
    cout<<endl<<"For float"<<endl;
    Stack<float> stack2(size);
    while(ans){
       
        cout<<"1. for push\n2. for pop\n3. for display\nElse for exit\n";
        cout<<"Enter your choice : ";
        cin>>ans;
        if(ans == 1){ 
            float val;
            cout<<"Enter the value : ";
            cin>>val;
            stack2.push(val);
        }
        else if(ans == 2){
            stack2.pop();
        }
        else if(ans ==3){
            stack2.display();
        }
        else{
            ans = false;
        }
    }
    cout<<endl<<"For queue" <<endl;

    cout<<"Enter the size for queue : ";
    cin>>size;
    cout<<"For intigers";
    Queue<int> queue(size);
    
    while(ans){
        cout<<"1. for enque\n2. for dequeue\n3. for display\nElse for exit\n";
        cout<<"Enter your choice : ";
        cin>>ans;
        if(ans == 1){ 
            int val;
            cout<<"Enter the value : ";
            cin>>val;
            queue.enque(val);
        }
        else if(ans == 2){
            queue.dequeue();
        }
        else if(ans ==3){
            queue.display();
        }
        else{
            ans = false;
        }

    }
    cout<<"For float";
    Queue<float> queue2(size);
    while(ans){
        int ans;
        cout<<"1. for enqueue\n2. for dequeue\n3. for display\nElse for exit\n";
        cout<<"Enter your choice : ";
        cin>>ans;
        if(ans == 1){ 
            float val;
            cout<<"Enter the value : ";
            cin>>val;
            queue2.enque(val);
            
        }
        else if(ans == 2){
            queue2.dequeue();

        }
        else if(ans ==3){
            queue2.display();
        }
        else{
            ans = false;
        }
    }

}