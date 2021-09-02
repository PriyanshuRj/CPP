#include<bits/stdc++.h>
using namespace std;
inline int multiply(int a,int b){
    return a*b;
}
inline int cubic(int a){
    return a*a*a;
}
int main(){
    cout<<"Enter the values for multiplication value "<<endl;
    int num1,num2;
    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;
    cout<<endl<<"ther result of multiplication is : "<<multiply(num1,num2)<<endl<<endl;
    cout<<"Enter the number : ";
    cin>>num1;
    cout<<"The cubic value is : "<<cubic(num1)<<endl;

    return 0;
}