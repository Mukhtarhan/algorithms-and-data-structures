#include <bits/stdc++.h>
using namespace std;
#define fi(n) for(int i = 0; i < n; i++)
int n, m;

bool search(vector<int> g[], int i, int j){
    int vis[n+1];
    fi(n+1)vis[i] = 0;
    vis[i] = 1;
    queue<int> q;
    q.push(i);
    while(!q.empty()){
        int cur = q.front();q.pop();
        fi(g[cur].size()){
            if(vis[g[cur][i]] == 0){
                vis[g[cur][i]] = 1;
                if(g[cur][i] == j)return true;
                q.push(g[cur][i]);
            }
        }
    }

    return false;

}

int main(){
    cin >> n >> m;
    vector<int> h[n+1];
      
    fi(m){
        int v, u;cin >> v >> u;
        h[v].push_back(u);
        h[u].push_back(v);
    }

    int z, y;cin >> z >> y;

    (search(h, z, y)) ? cout << "YES" : cout << "NO";
    // fi(n+1){
    //     for(int j : g[i]){
    //         cout << j << ' ';
    //     }cout << "\n";
    // }

}
