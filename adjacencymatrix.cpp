// undirected unweighted
#include<iostream>
using namespace std;
int main(){
    int n,e;
    cout<<"enter number of nodes:";
    cin>>n;
    cout<<"enter number of edges:";
    cin>>e;
    int adjmat[100][100];
    cout<<"enter the edges (u v):";
    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        adjmat[u][v]=1;
        adjmat[v][u]=1;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<adjmat[i][j]<<" ";
        }
        cout<<endl;
    }
}
