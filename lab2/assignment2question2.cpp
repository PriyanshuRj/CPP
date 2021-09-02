#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the length of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array : "<<endl;
    for(int i=0;i<n;i++){
        cout<<"Enter the element at index "<<i<<" : ";
        cin>>arr[i];
    }
    int num;
    cout<<endl<<"Enter the element to be searched : ";
    cin>>num;
    int begin = 0,last = n-1;
    while(begin<=last){
        int mid = (begin+last)/2;

        if(arr[mid]==num){
            cout<<"Elemet found at index : "<<mid<<endl;
            return 0;
        }
        else if(arr[mid]<num){
            begin = mid+1;
        }
        else{
            last = mid-1;
        }
    }
    cout<<"SOrry element not found"<<endl;
}