#include <bits/stdc++.h>
using namespace std;

//  a     b   c
// abab abab cx
// ab   ab   ababcx

#define ll long long


vector<ll> lcp(string s){
    vector<ll> pi(s.size(), 0);
    
    for(ll i = 1; i < s.size(); i++){
        ll j = pi[i-1];
        while(j > 0 and s[i] != s[j])j = pi[j-1];
        if(s[i] == s[j])j++;
        pi[i] = j;
    }



    return pi;
}

// a b a b a b a b c x
// 0 1 2 3 4 5 6 7 8 9
// 0 0 1 2 3 4 5 6 0 0

int main(){
    string s;
    
    cin >> s;
    
    vector<ll> pi = lcp(s);
    
    int ans = 0;
    for(int i = 1; i < s.size()-1; i+=2){
        if((i+1)%(i+1-pi[i]) == 0 and ((i+1)/(i+1-pi[i]))%2 == 0)ans++;
    }
    
    cout << ans;          
    
}