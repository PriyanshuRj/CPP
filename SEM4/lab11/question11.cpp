#include <bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[], int src, int dest)  { adj[src].push_back(dest);}
void displayGraph(vector<int> adj[], int v) {
    for (int i = 0; i < v; i++)    {
        cout << i;
        for (int j = 0; j < adj[i].size(); j++) cout << " --> " << adj[i][j];
        cout << "\n";
    }
}
void transposeGraph(vector<int> adj[], vector<int> transpose[], int v) {
    for (int i = 0; i < v; i++)    for (int j = 0; j < adj[i].size(); j++)    addEdge(transpose, adj[i][j], i);
}
int main() {
    int v = 5;
    vector<int> adj[v];
    vector<int> transpose[v];
    int cond = 1;
      while(cond){
    cout<<"\nPress 1 for adding Edge\nPress 2 for transposing Graph\nPress 3 for checking top\nElse for exiting\n\nEnter your choice : ";
    int choice;
    cin>>choice;
    switch(choice){
      case 1:
        cout<<"Enter first vertix : ";
        int data1,data2;
        cin>>data1;
        cout<<"Enter second vertix : ";
        cin>>data2;
        addEdge(adj,data1,data2);
        break;
      default:
        cond = 0;
        break; 
    }
  }
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 3);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 0);
    addEdge(adj, 3, 2);
    addEdge(adj, 4, 1);
    addEdge(adj, 4, 3);
    
    transposeGraph(adj, transpose, v);
    displayGraph(transpose, v);
    return 0;
}