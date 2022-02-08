#include<iostream>
using namespace std;
void swamp(int& num1,int& num2);


void swamp(int& num1,int& num2){
    int temp = num1;
    num1 = num2;
    num2 = temp;
}
int main(){
    int a,b;
    cout<<"Enter the value of number 1 :";
    cin>>a;
    cout<<"Enter the value of number 2 :";
    cin>>b;

    
    cout<<"Value of number 1 : "<<a<<endl<<"Value of number 2 : "<<b<<endl<<endl;
    swamp(a,b);
    cout<<"Value of number 1 : "<<a<<endl<<"Value of number 2 : "<<b<<endl;




    return 0;
}