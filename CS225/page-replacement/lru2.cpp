#include<bits/stdc++.h>
using namespace std;
int main(){
    int frames,processes,i,j,k,hit=0;
    cout<<"Enter number of frames : ";
    cin>>frames;
    cout<<"Enter number of processes : ";
    cin>>processes;
    vector<int> p(processes);
    vector<int> hit_vector(processes);
    cout<<"Enter processes bellow\n";
    for(i=0;i<processes;i++){
        cin>>p[i];
    }    
    cout<<endl<<endl;
    vector<vector<int>> a(frames);
    for(i=0;i<frames;i++){
        a[i]=vector<int>(processes,-1);
    }
    map <int, int> mp;    
    for(i=0;i<processes;i++){
        vector<pair<int,int>> c;
        for(auto q: mp){
            c.push_back({q.second,q.first});
        }
        sort(c.begin(),c.end());
        bool runed=false;
        for(j=0;j<frames;j++){
            if(a[j][i]==p[i]){
                hit++;
                hit_vector[i]=1;
                mp[p[i]]=1;
                runed=true;
                break;
            }
            if(a[j][i]==-1){
                for(k=i;k<processes;k++)
                    a[j][k]=p[i];
                mp[p[i]]++;
                runed=true;
                break;
            }
        }
        if(j==frames||runed==false){
            for(j=0;j<frames;j++){
                if(a[j][i]==c[c.size()-1].second){
                    mp.erase(a[j][i]);
                    for(k=i;k<processes;k++)
                        a[j][k]=p[i];
                    mp[p[i]]++;
                    break;
                }
            }
        }
        for(auto q:mp){
            if(q.first!=p[i]){
                mp[q.first]++;
            }
        }
    }
    cout<<"Process : ";
    for(i=0;i<processes;i++){
        cout<<p[i]<<" ";
    }
    cout<<'\n';
    for(i=0;i<frames;i++){
        cout<<"Frame "<<i<<" : ";
        for(j=0;j<processes;j++){
            if(a[i][j]==-1)
                cout<<"E ";
                else 
            cout<<a[i][j]<<" ";
        }
        cout<<'\n';
    }
    cout<<"HIT       ";
    for(i=0;i<processes;i++){
        if(hit_vector[i]==0)
        cout<<"  ";
        else
        cout<<"H ";
    }
    cout<<"\n";
    cout<<"Total Hit : "<<hit<<'\n'<<"Total Page Fault : "<<processes-hit<<'\n';
    return 0;
}