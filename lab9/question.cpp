#include<iostream>
#include <fstream>
#include<vector>
using namespace std;
int main(){
    ifstream fin;
    fin.open("Source1.txt");
    if(!fin){
        cout<<"Error file dosen't exists"<<endl;
    }
    vector <int> S1;
    int val;
    while(fin>>val){
        S1.push_back(val);
    }
    fin.close();
    fin.open("Source2.txt");
    if(!fin){
        cout<<"Error file dosen't exists"<<endl;
    }
    vector <int> S2;
    while(fin>>val){
        S2.push_back(val);
    }
    fin.close();
    vector <int> target;
    int i=0,j=0;
    while(i<S1.size() && j<S2.size()){      
        if(S1[i]<S2[j]) target.push_back(S1[i++]);
        else target.push_back(S2[j++]);
    }
    for(;i<S1.size();i++) target.push_back(S1[i]);
    for(;j<S2.size();j++) target.push_back(S2[j]);
    ofstream fout;
    fout.open("Targer.txt");
    for(int k=0 ; k< target.size();k++) fout<<target[k]<<" ";
    fout.close();
    return 0;
}