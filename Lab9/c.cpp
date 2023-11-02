#include<bits/stdc++.h>
using namespace std;
int main(){
    string s, t;
    cin>>s>>t;
    bool ok=true;
    string st, st2, st3;
    int ind=0,m,x;
    for(int i=0;i<s.size();i++){
        if(s[i]==t[ind] && ok){
            ind++;
            m=ind;
            st+=s[i];
        }
        else{
            x=i;
            st2+=s[i];
        }
    }
    for(int i=m;i<t.size();i++){
        st3+=t[i];
    }
    if(st2!=st3){
        cout<<-1;
        return 0;
    }
    cout<<s.size()-x-1;
}