#include <bits/stdc++.h>
using namespace std;

vector<int> prefix(string s){
    vector<int> pi(s.size());
    pi[0] = 0;
    int i = 1, j = 0;
    while(i < s.size()){
        if(tolower(s[i]) == tolower(s[j]))pi[i++] = ++j;
        else if(j == 0)pi[i++] = 0;
        else j = pi[j-1];
    }

    return pi;
}

int main(){
    string s;int n;
    cin >> s >> n;
    vector<pair<string, int>> vec;
    int mx = 0;
    while(n--){
        string t;cin >> t;
        vector<int> pi = prefix(t + '#' + s);
        mx = max(mx, pi[pi.size()-1]);
        vec.push_back({t, pi[pi.size()-1]});
    }

    vector<string> result;
    for(pair<string, int> p : vec){
        if(mx != 0 and mx == p.second)result.push_back(p.first);
    }

    cout << result.size() << "\n";
    for(string x:result)cout << x << "\n";
    

}