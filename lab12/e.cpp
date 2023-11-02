#include <bits/stdc++.h>
using namespace std;

struct edge {
	int a, b, cost;
    edge(int x, int y, int w){
        this->a = x;
        this->b = y;
        this->cost = w;
    }

};

const int INF = 100000;
    int n;vector<edge> e;

vector<int> d(103, INF), p (103, -1);

void solve(){
    
    int x;
    for(int i = 0; i < n; i++){
        x = -1;
        for(int j = 0; j < e.size(); ++j){
            if (d[e[j].b] > d[e[j].a] + e[j].cost) {
				d[e[j].b] = d[e[j].a] + e[j].cost;
				p[e[j].b] = e[j].a;
				x = e[j].b;
			}
        }
    }

    if(x == -1)cout << "NO";
    else{
        int y = x;
        for(int i = 0; i < n; i++)y = p[y];
        vector<int> path;
        for(int cur = y; ; cur = p[cur]){
            path.push_back(cur);
            if(cur == y and path.size() > 1)break;
        }


        cout << "YES\n" << path.size() << "\n";
        for(int i = 0; i < path.size(); i++){
            // path[i] +=
            cout << path[i] << ' ';
        }
    }
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int c;cin >> c;
            if(c != INF)
                e.push_back(edge(j+1,i+1, c));
        }
    }

    solve();
    
}