#include<iostream>
using namespace std;
int main(){
    int layers = 5;
    for(int i=0;i<layers;i++){
        for(int j=0;j<i+1;j++){
            cout<<(char)(65+j)<<" ";
        }
        cout<<endl;
    }
    for(int i = layers-1;i>0;i--)
    {
        for(int j =0;j<i;j++){
            cout<<(char)(65+j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}