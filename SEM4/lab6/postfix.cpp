#include<bits/stdc++.h>
using namespace std;
struct Stack{
    int size;
    int *arr;
    int head;
};
float evaluate(string s){
    struct Stack stack;
    int size;
    stack.size = 100;
    stack.head = 0;
    stack.arr = new int[stack.size];
    
    int start = 0,len = 0,exp_start=0;
    string *st = new string[s.size()];
    for(int i  = 0;i<s.size();i++){
        
        if(s[i] == ' '){
            
            len = i - start;
            st[exp_start++] = s.substr(start,len);
            start = i+1;
        }
        if(i == s.size()-1){ 
            len = 1 + i - start;
            st[exp_start++] = s.substr(start,len);
        }
    }
    
    for(int i = 0;i<exp_start;i++){
        if(st[i] != "+" && st[i] != "-" && st[i] != "/" && st[i] != "*" && st[i] != "//"){
            stack.arr[stack.head++] = stoi(st[i]);
        }
        if(st[i] == "+"){
            int b = stack.arr[--stack.head];
            int a = stack.arr[--stack.head]; 
            stack.arr[stack.head++] = a+b;

        }
        if(st[i] == "*"){
            int b = stack.arr[--stack.head];
            int a = stack.arr[--stack.head]; 
            stack.arr[stack.head++] = a*b;

        }
        if(st[i] == "/"){
            int b = stack.arr[--stack.head];
            int a = stack.arr[--stack.head]; 
            stack.arr[stack.head++] = a/b;

        }
        if(st[i] == "-"){
            int b = stack.arr[--stack.head];
            int a = stack.arr[--stack.head]; 
            stack.arr[stack.head++] = a-b;

        }
    }
    
    return stack.arr[0];
}
int main(){

    cout<<"Enter the postfix exporession : ";
    string exp;
    getline(cin,exp);
    float result = evaluate(exp);
    cout<<"The result of the given result is : "<<result<<endl;
    return 0;
}