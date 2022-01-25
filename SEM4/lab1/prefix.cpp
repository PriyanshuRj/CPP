#include<iostream>

using namespace std;

int *prefixsum(int *arr){
    int sum = 0;
    int *ar = new int[sizeof(arr)/sizeof(arr[0])];
    for(int i = 0;i<sizeof(arr)/sizeof(arr[0]);i++){
        ar[i] = sum+arr[i];
        sum = ar[i];
    }
    return ar;
}
void display(int *a){
    cout<<"size "<<sizeof(&a)<<endl;
    for(int i = 0;i<sizeof(a)/sizeof(a[0]);i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int *ar= new int[10];
    for(int i = 0;i<10;i++){
        cin>>ar[i];
    }
    display(ar);
    int *arr = new int[10];
    arr = prefixsum(ar);
    display(arr);
}