#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    scanf("%d%d", &n, &x);
    priority_queue<int> pq;
    while(n--){
        int x;scanf("%d", &x);
        pq.push(x);
    }
    long long res = 0;
    while(x--){
        int mx = pq.top();
        pq.pop();
        if(mx == 0)break;
        res += mx;
        pq.push(mx-1);
    }

    cout << res;
    return 0;
}