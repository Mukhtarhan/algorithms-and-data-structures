#include <bits/stdc++.h>
using namespace std;

vector<int> bin(int a[], int n, int x){
    int l = 0, r = n-1;
    int large = n, sum = 0;
    while(l <= r){
        int m = l + (r-l)/2;
        if(a[m] > x){
            r = m-1;
            large = m;
        }else l = m+1;
    }

    for(int i = 0; i < large; i++){
        sum += a[i];
    }
    return {large, sum};
}

int main(){
    int n;cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)cin >> a[i];

    sort(a, a+n);
    // for(int x:a)cout << x << ' ';

    int t;cin >> t;
    for(int i = 0; i < t; i++){
        int x;cin >> x;
        cout << bin(a, n, x)[0] << ' ' << bin(a, n, x)[1] << endl;
    }


}