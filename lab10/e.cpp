#include <bits/stdc++.h>
using namespace std;
#define fi(n) for(int i = 0; i < n; i++)
#define fj(n) for(int j = 0; j < n; j++)

int n, q;

int main(){
    // freopen("in.txt", "r", stdin);
    cin >> n >> q;
    int g[n][n];
    fi(n)fj(n)
            cin >> g[i][j];

    fi(q){
        int x, y, z;cin >> x >> y >> z;
        int s = g[x-1][y-1] + g[x-1][z-1] +g[y-1][z-1];
        (s == 3) ? cout << "YES\n" : cout << "NO\n";
    }
   
}