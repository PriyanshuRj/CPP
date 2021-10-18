#include<bits/stdc++.h>
using namespace std;
int checkprime(int num);
int checkprime(int num){
    for(int i =2;i*i<num;i++){
        if(num%i==0){
            cout<<"Number is not a Prime"<<endl;
            return i;
        }

    }
    cout<<"Number is prime"<<endl;
    return -1;
}
int main(){
    int a;
    cout<<"Enter the number : ";
    cin>>a;
    int factor = checkprime(a);
    return 0;
}