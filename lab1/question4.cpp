#include<iostream>
using namespace std;
int main(){
    int year = 1800;
    cout<<"The leap years from 1800 to 2000 are as follows : "<<endl;
    do{
        
        if(year%100==0 && year%400 != 0){
            year +=4;
            continue;
        } 
        cout<<year<<endl;
        year +=4;
    }while(year<=2000);
    return 0;
}