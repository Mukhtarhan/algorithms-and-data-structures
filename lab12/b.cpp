#include <bits/stdc++.h>
using namespace std;
#define INF 100000000
#define maxn 200500
#define f first
#define s second



int n, m, a, b;
vector<vector<pair<int, int>>> g(maxn);

vector<int> dist(int s){
    vector<int> d(n, INF);
    priority_queue<pair<int, int>> q;
    d[s] = 0;
    q.push({0, s});
    while(!q.empty()){
        int u = q.top().s, dist = -q.top().f;
        q.pop();
        if(dist > d[u])continue;

        for(int i = 0; i < g[u].size(); i++){
            int to = g[u][i].f, len = g[u][i].s;
            if(d[u]+len < d[to]){
                d[to] = d[u]+len;
                q.push({-d[to], to});
            }
        }
    }
    
    

    return d;

}


int main(){
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    int s, f1;
    cin >> n >> m;
    


    for(int i = 0; i < m; i++){
        int u, v, c;cin >> u >> v >> c;u--;v--;
        g[u].push_back({v, c});
        g[v].push_back({u, c});
    }

    cin >> s >> a >> b >> f1;s--;a--;b--;f1--;

    vector<int> sv = dist(s), av = dist(a), bv = dist(b);
    long long mn = INT_MAX; 
    long long r1 = sv[a] + av[b] + bv[f1];
    long long r2 = sv[b] + bv[a] + av[f1];
    long long r3 = sv[a] + av[s] + sv[b] + bv[f1];
    long long r4 = sv[b] + bv[s] + sv[a] + av[f1];
    long long r5 = sv[a] + av[b] + bv[s] + sv[f1];
    long long r6 = sv[a] + av[b] + bv[a] + av[f1];
    long long r7 = sv[a] + av[b] + bv[a] + av[s] + sv[f1];
    long long r8 = sv[b] + bv[a] + av[s] + sv[f1];
    long long r9 = sv[b] + bv[a] + av[b] + bv[s] + sv[f1];


    if(bv[a] == INF and bv[s] == INF){cout << -1;return 0;}
    if(av[s] == INF and av[b] == INF){cout << -1;return 0;}
    if(sv[f1] == INF and av[f1] == INF and bv[f1] == INF){cout << -1;return 0;}
    mn = min(r1, min(r2, min(r3, min(r4, min(r5, min(r6, min(r7, min(r8, r9))))))));
    
    // for(int i = 0; i < n; i++)cout << sv[i] << " ";
    // cout << "\n";
    // for(int i = 0; i < n; i++)cout << av[i] << " ";
    // cout << "\n";
    // for(int i = 0; i < n; i++)cout << bv[i] << " ";


    cout << mn;

    // cout << r1 << " " << r2 << r1 << " " << r3 << r4 << " " << r5 << r6 << " " << r7 << r8 << " " << r9 ;

    

}