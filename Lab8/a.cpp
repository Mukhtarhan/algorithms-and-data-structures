#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e9 + 7;

int noted[100*1000+256];

ll hashe (string k){
    long long cnt = 0;
    ll kr = 1;
    for (int i=0;i<k.size();i++){
        ll hs = (k[i]-47)* kr;
        kr *= 11;
        kr = kr % N;
        cnt+=hs%N;
        cnt = cnt%N;
    }
    return cnt;
}
ll toint (string s){
    if (s.size()>9){
        return -1;
    }
    int ans = 0;
    int cnt = 1;
    reverse(s.begin(),s.end());
    for (int i=0;i<s.size();i++){
        ans += cnt * (s[i]-48);
        cnt*=10;
    }
    return ans;
}
int main (){
    int n;
    cin>>n;
    vector<string> v;
    vector<pair<ll,string>> vec;
    unordered_map<ll,string> mp;
    for (int i=0;i<n*2;i++){
        string s;
        cin>>s;
        v.push_back(s);
        vec.push_back(make_pair(hashe(s),s));
    }

    // unordered_map<ll,string>::iterator it=mp.begin();
    // for (int i = 0; it != mp.end(); it++, i++) {
    //     for(int j=0;j<v.size();j++){
    //         if(to_string(it->first)==v[j]){
    //             vec.push_back(make_pair(it->first,it->second));
    //             // cout<<"Hash of string "<<"\""<<it->second<<"\""<<" is "<<it->first<<endl;
    //             break;
    //         }

    //     }
        
    // }
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<v.size();j++){
            if(to_string(vec[i].first)==v[j]){
                cout<<"Hash of string "<<"\""<<vec[i].second<<"\""<<" is "<<vec[i].first<<endl;
                break;
            }
        }
    }

} 