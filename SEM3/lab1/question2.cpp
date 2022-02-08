#include<iostream>
using namespace std;
int main(){
    char charecter = 'A';
    int count_array[5] {};
    while(charecter == 65 || charecter == 69 || charecter == 73 || charecter == 79 || charecter == 85){
        cout<<"Enter the desired charecter :";
        cin>>charecter;
        charecter = toupper(charecter);
        if(charecter == 65) count_array[0]++;
        if(charecter == 69) count_array[1]++;
        if(charecter == 73) count_array[2]++;
        if(charecter == 79) count_array[3]++;
        if(charecter == 85) count_array[4]++;


    }
    cout<<"The number of time charecter A is entered is : "<<count_array[0]<<endl;
    cout<<"The number of time charecter E is entered is : "<<count_array[1]<<endl;
    cout<<"The number of time charecter I is entered is : "<<count_array[2]<<endl;
    cout<<"The number of time charecter O is entered is : "<<count_array[3]<<endl;
    cout<<"The number of time charecter U is entered is : "<<count_array[4]<<endl;
    return 0;
}