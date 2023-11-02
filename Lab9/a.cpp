#include<bits/stdc++.h>
using namespace std;

vector<int>xxx(string s){
    int n = s.size();
    vector<int>p(n);
    p[0] = 0;

    for(int i = 1; i < n; i++){
        int j = p[i - 1];
        while(j > 0 && s[i] != s[j])
            j = p[j - 1];

            if(s[i] == s[j])
            j++;

            p[i] = j;
        }
    return p;    
}

bool checkpat(vector<int>v,int sz){
    for(auto i:v)
    if(i == sz)
        return true;
    return false;
}

int main(){
    string a,b;
    cin >> a >> b;
    string result = a;
    int count = 1;
    while(result.size() < b.size()){
        result += a;
        count++;
    }
    if(checkpat(xxx(b + '#' + result),b.size())){
        cout << count;
    }
    else{
        if(checkpat(xxx(b + '#' + result + a),b.size()))
            cout << count + 1;
        else
            cout << -1;
    }
    return 0;
}