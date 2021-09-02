#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter the dimensions of the matrix (seprated by a space):";
    cin>>n>>m;
    int arr1[n][m] ,max[m];
    string arr2[n][m];
    cout<<endl<<"Enter the element of the first array :"<<endl<<endl;
    for(int i=0;i<n;i++) for(int j =0;j<m;j++){
        cout<<"Enter the element at row no. "<<i+1<<" and column no. "<<j+1<<" : ";
        cin>>arr1[i][j];

    }
    cout<<endl<<endl<<"Enter the element of the second array :"<<endl<<endl;
    for(int i=0;i<n;i++){
        max[i] =0;
        for(int j =0;j<m;j++){
            cout<<"Enter the element at row no. "<<i+1<<" and column no. "<<j+1<<" : ";
            int inp2;
            cin>>inp2;
            arr2[i][j] = to_string(inp2+arr1[i][j]);
            


            if(arr2[i][j].length()>max[j]){
                max[j]=arr2[i][j].length();

            }
        }
        
    }
    cout<<endl<<"Now after performing sum operation on all the elements of these two array the resultan array is : "<<endl<<endl;
        for(int i=0;i<n;i++){
            for(int j =0;j<m;j++){
                int len = max[j]-arr2[i][j].length();
                
                while(len>0){
                    cout<<" ";
                    len--;
                }
                cout<<arr2[i][j]<<" ";
                
        } 
        cout<<endl;

        
    }
}