#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int arr[5] ={};
    for(int i =0;i<s.length();i++){
        if(s[i]==97) arr[0]++;
        if(s[i]==101)arr[1]++;
        if(s[i]==105)arr[2]++;
        if(s[i]==111)arr[3]++;
        if(s[i]==117)arr[4]++;

    }
    cout<<endl;
cout<<"The numbers of times A has ocured in the string is : "<<arr[0]<<endl;
cout<<"The numbers of times E has ocured in the string is : "<<arr[1]<<endl;
cout<<"The numbers of times I has ocured in the string is : "<<arr[2]<<endl;
cout<<"The numbers of times O has ocured in the string is : "<<arr[3]<<endl;
cout<<"The numbers of times U has ocured in the string is : "<<arr[4]<<endl;
cout<<"The total number of times vowel occured in the string is : "<<arr[0]+arr[1]+arr[2]+arr[3]+arr[4]<<endl;
}