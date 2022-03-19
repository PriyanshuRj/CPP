#include<iostream>
using namespace std;

int multiply(int n){
    return n*n;
}
int main (){
    int n;
    cout<<"Enter the no : ";
    cin>>n;
    int result = multiply(n);
    cout<<result;
}
