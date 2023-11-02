#include <bits/stdc++.h>

using namespace std;

vector<int> LCP(string s){
    vector<int> pi(s.size());
    pi[0] = 0;
    int i = 1, j = 0;
    while(i < s.size()){
        if(s[i] == s[j])pi[i++] = ++j;
        else if(j == 0)pi[i++] = 0;
        else j = pi[j-1];
    }

    return pi;
}


int main(){
    int n;cin >> n;

    while(n--){
        string s;cin >> s;
        int h;cin >> h;
        int res = s.size(), r = LCP(s)[s.size()-1];

        res += (h-1) * (s.size()-r);
        
        cout << res << "\n";
    }

}