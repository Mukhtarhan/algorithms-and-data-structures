#include <bits/stdc++.h>
using namespace std;
vector<int> vis(10000);
#define ll long long
#define maxn 1e4
vector<ll> path;

// 5 9     prev[10] = 5 prev[20] = 10        prev[4] =5       prev [9] = 10

int conv(int a, int b){
    map<ll, ll> prev;
    queue<pair<ll, ll>> q;
    prev[a] = -1;
    q.push({a, 0});
    while(!q.empty()){
        pair<ll, ll> p = q.front();
        q.pop();
        if(p.first == b){cout << p.second << endl;break;}
        vis[p.first] = 1;
        if(not vis[p.first-1]){q.push({p.first-1, p.second+1});prev[p.first-1] = p.first;}
        
        if(2*p.first < maxn and not vis[2*p.first]){q.push({2*p.first, p.second+1});prev[2*p.first] = p.first;}
        
        

    }
    
    // for(auto x : prev)cout << x.first << ' ' << x.second << endl;
    path.push_back(b);
    while(1){
        if(path[path.size()-1] == a)break;
        else path.push_back(prev[path[path.size()-1]]);
    }
}


int main(){
    // freopen("int.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    int a, b;cin >> a >> b;
    conv(a, b);
    
    for(int i = path.size()-2; i >= 0; i--)cout << path[i] << ' ';
    
}