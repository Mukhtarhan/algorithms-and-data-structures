#include <bits/stdc++.h>
using namespace std;
#define fi(n) for(int i = 0; i < n; i++)
#define fj(n) for(int j = 0; j < n; j++)
int n, m, q;

int find(vector<int> g[], bool color[], int v){
    if(color[v])return 0;
    int vis[n+1], dist[n+1];
    fi(n+1){
        vis[i] = false;
        dist[i] = INT_MAX;
    }
    queue<int> q;
    q.push(v);
    vis[v] = 1;
    dist[v] = 0;
    while(!q.empty()){
        int cur = q.front();q.pop();
        fi(g[cur].size()){
            if(vis[g[cur][i]] == 0){
                vis[g[cur][i]] = 1;
                dist[g[cur][i]] = dist[cur]+1;
                if(color[g[cur][i]])return dist[g[cur][i]];
                q.push(g[cur][i]);
            }
        }
    }
    return -1;
}

int main(){
    // freopen("in.txt", "r", stdin);

    cin >> n >> m >> q;
    vector<int> g[n+1];
    
    while(m--){
        int src, dest;
        cin >> src >> dest;
        g[src].push_back(dest);
        g[dest].push_back(src);
    }

    bool col[n+1];
    fi(n+1)col[i] = false;

    fi(q){
        int o, v;cin >> o >> v;
        if(o == 1){
            col[v] = true;
        }else{
            cout << find(g, col, v) << "\n";
        }
        
    }

    // fi(n+1)cout << color[i] << ' ';



}
