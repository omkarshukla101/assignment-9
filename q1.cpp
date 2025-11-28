#include <bits/stdc++.h>
using namespace std;
int main() {
    int n = 6;
    vector<int> adj[6];
    adj[0] = {1, 2};
    adj[1] = {3};
    adj[2] = {4};
    adj[4] = {5};
    bool visited[6];
    for(int i = 0; i < n; i++) {
        visited[i] = false;
    }

    queue<int> q;

    int start = 0;
    visited[start] = true;
    q.push(start);

    while(!q.empty()) {
        int u = q.front();
        q.pop();
        cout << u << " ";
        for(int v : adj[u]) {
            if(!visited[v]) {
                visited[v] = true;
                q.push(v);
            }
        }
    }

    return 0;
}
