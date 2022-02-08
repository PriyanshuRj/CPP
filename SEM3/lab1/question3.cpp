#include<iostream>
using namespace std;
int main(){
    float number = 0;
    int count[3] {};
    for(int i=0;number!=-1;i++){
        cout<<"Enter the no. :";
        cin>>number;
        if(number>0)count[0]++;
        if(number<0)count[1]++;
        if(number==0)count[2]++;

    }
    cout<<"The Number of postive numbers entered is : "<<count[0]<<endl;
    cout<<"The Number of negative numbers entered is : "<<count[1]-1<<endl;
    cout<<"The Number of zeros entered is : "<<count[2]<<endl;
    return 0;
}