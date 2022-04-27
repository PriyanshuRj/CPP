#include <bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[], int src, int dest)  { adj[src].push_back(dest);}

void transposeGraph(vector<int> adj[], vector<int> transpose[], int v) {
    for (int i = 0; i < v; i++)    for (int j = 0; j < adj[i].size(); j++)    addEdge(transpose, adj[i][j], i);
}
void display(vector<int> adj[], int v) {
    for (int i = 0; i < v; i++)  for (int j = 0; j < adj[i].size(); j++) cout <<i<< " --> " << adj[i][j]<<endl;
    
}
int main() {
    cout<<"Enter the no. of Connections : ";
    int n_connection = 0;
    cin>>n_connection;
        vector<int> adj[n_connection];
    vector<int> transpose[n_connection];
    for(int i = 0;i<n_connection;i++){
        cout<<"For Connection "<<i+1<<" :::: \n";
        cout<<"Enter the starting Node : ";
        int start,end;
        cin>>start;
        cout<<"Enter the ending Node : ";
        cin>>end;
        addEdge(adj,start,end);
    }
    cout<<"Actual Graph : "<<endl;
    display(adj, n_connection);
    cout<<endl<<endl;
    transposeGraph(adj, transpose, n_connection);
    cout<<"After Transposing the Graph : "<<endl;
    display(transpose, n_connection);
    return 0;
}