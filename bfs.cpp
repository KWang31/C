#include <bits/stdc++.h>
using namespace std;

const int maxN=5; // const tells us that this doesn't change
vector<int> adj [maxN];
int main() {

    int n,m;
    cin >> n >> m;
    vector<int> deg(n);
    vector<bool> vis(n);
    for(int i=0; i<m; ++i){
        int v1, v2;
        cin >> v1 >> v2;
        --v1, --v2;
        adj[v1].push_back(v2); //Add v2 to N(v1)
        adj[v2].push_back(v1);
        ++deg[v1], ++deg[v2];
    }
    queue <int> qu;
    qu.push(0); vis[0]=true;
    int v;
    while(!qu.empty()){
       v = qu.front(); // Returns the first element
       cout << (v+1) << "\n";
       vis[v]=true;
       for(int w: adj[v]){
            if(!vis[w]){
                 qu.push(w); vis[w]=true;
            }
       }
       qu.pop(); //Pop the first element, doesn't return anything
    }
}
