#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    string filename("input.txt");
    vector<char> target;

    ifstream fin;
    fin.open("input.txt");
    if(!fin){
        cout<<"Error file dosen't exists"<<endl;
    }

    unsigned char character = 0;
    char val;
    while(fin>>val){
        target.push_back(val);
    }
    
    fin.close();

    ofstream fout;
    fout.open("Targer.txt");
    for(int k=0 ; k< target.size();k++) fout<<target[k];
    fout.close();
    return 0;
}