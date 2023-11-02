#include <bits/stdc++.h>
using namespace std;
#define fi(n) for(int i = 0; i < n; i++)
#define fj(n) for(int j = 0; j < n; j++)
int n;

int search(vector<int> g[], int s, int e){
    int vis[n];
    int dist[n];
    fi(n){vis[i] = 0;dist[i] = INT_MAX;}
    int res = 0;
    queue<int> qu;
    qu.push(s);
    vis[s] = 1, dist[s] = 0; 
    while(!qu.empty()){
        int cur = qu.front();qu.pop();
        
        fi(g[cur].size()){
            if(vis[g[cur][i]] == 0){
                vis[g[cur][i]] = 1;
                dist[g[cur][i]] = dist[cur]+1;
                if(g[cur][i] == e)return dist[e];
                qu.push(g[cur][i]);
            }
        }
        
    }

    return -1;

}

int main(){
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    cin >> n;
    vector<int> g[n];
    fi(n){
        fj(n){
            int t;cin >> t;
            if(t == 1){
                g[i].push_back(j);
            }
        }
    }

    int s, e;cin >> s >> e;
    cout << search(g, s-1, e-1);

    // fi(n){fj(g[i].size())cout << g[i][j] << ' ';cout << endl;}

}