#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//undirected weighted
int main(){
    int n,e;
    cout<<"enter the no of vertex and edges:";
    cin>>n>>e;
    vector<pair <int,int>> adj[100];
    for(int i=0;i<e;i++){
        int u,v,w;
        cout<<"enter edge and wt(u v w):";
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    for(int i=0;i<n;i++){
        cout<<i<<"->";
        for(auto p:adj[i]){
            cout<<p.first<<","<<p.second<<" ";
        }
        cout<<endl;
    }
}
