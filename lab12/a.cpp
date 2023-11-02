#include <bits/stdc++.h>
using namespace std;
#define fi(n) for(int i = 0; i < n; i++)
int n;


int main(){

    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);


    cin >> n;
    int d[n][n];
    int order[n];


    fi(n){
        for(int j = 0; j < n; j++){
            cin >> d[i][j];
        }
    }
    vector<bool> vis(n, false);
    fi(n){cin >> order[i];order[i]--;}
    for(int k = 0; k < n; k++){
        int mx = 0;
        
        int o = order[k];
        vis[o] = true;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                d[i][j] = min(d[i][j], d[i][o] + d[o][j]);
                if(vis[j] and vis[i]){
                    // if(mx < max(d[o][j], d[j][o]))cout << max(d[o][j], d[j][o]) << " titi\n";
                    mx = max(mx, d[i][j]);
                }
            }
            

        }
        cout << mx << "\n";
      
    }

    // fi(n){
    //     for(int j = 0; j < n; j++)cout << d[i][j] << ' ';
    //     cout << "\n";
    // }

  
}    

