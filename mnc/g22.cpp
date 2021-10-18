#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    for(int it =0;it<t;it++){
        string n;
        cin>>n;
        int i=0;
        for(;i<n.length();i++){
            if(n[i]=='0'){
                int last = n.length()-i-1;
                cout<<pow(2,n.length()) - pow(2,last+1)+1<<endl;
                break;
            }
            if(n[i]>'1'){
                cout<<pow(2,n.length())-1<<endl;
                break;
            }

        }
        if(i==n.length()){
                cout<<pow(2,n.length())-1<<endl;
            
        }

        
    }
    return 0;
}