#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t,st;
    int n,ind=0,size,cnt=0;
    cin>>s>>n;
    cin>>t;
    size=s.size();
    for(int i=0;i<t.size();i++){
        if(ind==size){
            ind=0;
            cnt++;
        }
        if(t[i]==s[ind]){
            ind++;  
        }
        else if(t[i]!=s[ind]){
            ind=0;
        }
    }

    if(cnt>=n)cout<<"YES";
    else cout<<"NO";
}