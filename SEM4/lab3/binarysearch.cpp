#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int length,int key){
    int big = 0,end = length - 1;
    while(big<=end){
        int mid = (big+end)/2;
        if(arr[mid]==key) return mid;
        else if(arr[mid]>key) end = mid-1;
        else big = mid+1;
    }
    return -1;
}
void insert_or_delete(int *arr,int index,int length,int value){
    if(index != -1){
    for(int i = index;i<length-1;i++){
        arr[i] = arr[i+1];
    }
    arr[length-1] = NULL;
    }
    else {

    }
}
void display(int arr,int length){
    for(int i = 0;i<length;i++){
        cout<<"Element at index "<<i<<" is :"<<arr[i]<<endl;
    }
}
int main(){
    int n,value;
    cout<<"Enter the number of element in the array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in sorted manner >>>>>>"<<endl;
    for(int i =0;i<n;i++) cin>>arr[i];
    cout<<"Enter the element to sort : ";
    cin>>value;
    int result = binarySearch(arr,n,value);
    if(result==-1) cout<<"Element not found in thwe array !!";
    else cout<<"Element found at the index : "<<result<<endl;

    return 0;
}