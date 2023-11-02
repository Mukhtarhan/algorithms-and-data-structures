#include <bits/stdc++.h> 
using namespace std; 
#define fi(n) for(int i = 0; i < n; i++) 
#define fj(n) for(int j = 0; j < n; j++) 
 
int n, m; 
 
bool safe(int i, int j){ 
    return i >= 0 and j >= 0 and i < n and j < m; 
} 
 
int dir[] = {-1, 0, 1, 0, -1}; 
 
int main(){ 
    // freopen("in.txt", "r", stdin); 
    cin >> n >> m; 
    int a[n][m];bool v[n][m]; 
    queue<pair<int, int >> qu; 
    int mash = 0; 
    fi(n){ 
        fj(m){ 
        cin >> a[i][j]; 
        if(a[i][j] == 2){ 
            qu.push({i, j}); 
        }else if(a[i][j] == 1)mash++; 
 
        } 
    } 
    int res = -1; 
 
    while(!qu.empty()){ 
        int si = qu.size(); 
        while(si--){ 
            pair<int, int> p = qu.front(); 
            qu.pop(); 
            fi(4){ 
                int x = p.first + dir[i]; 
                int y = p.second + dir[i+1]; 
                if(safe(x, y) and a[x][y] == 1){ 
                    a[x][y] = 2; 
                    qu.push({x, y}); 
                    mash--; 
                } 
            } 
        }res++; 
    } 
 
    // cout << mash; 
    if(mash > 0)cout << -1; 
    else 
        res == -1 ? cout << 0 : cout << res; 
}