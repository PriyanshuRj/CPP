#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter the dimensions of the matrix (seprated by a space):";
    cin>>n>>m;
    int arr1[n][m] ,arr2[n][m];
    cout<<"Enter the element of the first array :"<<endl;
    for(int i=0;i<n;i++) for(int j =0;j<m;j++){
        cout<<"Enter the element at row no. "<<i+1<<" and column no. "<<j+1<<" : ";
        cin>>arr1[i][j];
    }
    cout<<endl<<"Enter the element of the second array :"<<endl;
    for(int i=0;i<n;i++) for(int j =0;j<m;j++){
        cout<<"Enter the element at row no. "<<i+1<<" and column no. "<<j+1<<" : ";
        cin>>arr2[i][j];
    }
    cout<<"Now after performing sum operation on all the elements of these two array the resultan array is : "<<endl;
        for(int i=0;i<n;i++){
            for(int j =0;j<m;j++){
                cout<<arr1[i][j]+arr2[i][j]<<" ";
        } 
        cout<<endl;

        
    }
}