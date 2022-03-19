#include<bits/stdc++.h>
#include<fstream>

using namespace std;
int main(){
    fstream file;
    file.open("file.txt",ios::in);
    vector<char> vect;
    while(file){
        char c;
        file.get(c);
        vect.push_back(c);
    }
    file.close();
    file.open("out.txt",ios::out);
    for(int i =0;i<vect.size();i++) file<<vect[i]<<'\n';

}